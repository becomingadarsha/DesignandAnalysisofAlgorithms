#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int BinarySearch(int *arr, int low, int high, int key)
{
    if (high >= low)
    {
        int mid = (high + low) / 2;
        // If the element is present at the middle itself
        if (arr[mid] == key)
            return mid;
        // If element is smaller than mid, then it can only be present
        // in left subarray
        else if (arr[mid] > key)
            return BinarySearch(arr, low, mid - 1, key);
        // Else the element can only be present in right subarray
        else
            return BinarySearch(arr, mid + 1, high, key);
    }
    // We reach here when element is not present in array
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    double total_time = 0.0;
    time_t begin, end;

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter key to search : ");
    scanf("%d", &key);

    begin = clock();
    int index = BinarySearch(arr, 0, n - 1, key);
    end = clock();

    total_time += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Execution time : %f seconds\n", total_time);

    if (index != -1)
        printf("Element found at index %d\n", index+1);
    else
        printf("Element not found in the array\n");

    return 0;
}
