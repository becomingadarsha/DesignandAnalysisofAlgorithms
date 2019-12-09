#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// compare sorted list elements from last and if array elements are larger shift it right and if small insert that element : j point sorted sublist ele i point to key index
void InsertionSort(int *arr, int n)
{
    // assume arr[0] is sorted so start from arr[1]
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // hole ; make 2nd element index[0] in temp which is compared with sorted list
        int j = i - 1; // index just before unsorted sublist 
        
        while (j > -1 && arr[j] > key)  // compare key with sorted sublist
        {
            arr[j + 1] = arr[j]; // if unsorted list array ele are greater than key then just shift elements
            j--; // move previous index
        }

        // if element small than key found then insert key next to that small element i.e next to j 
        arr[j + 1] = key; 
    }
}

int main(int argc, char const *argv[])
{
    int arr[100], n;
    clock_t start, end;
    double time_spent = 0.0;

    printf("Enter size of array : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000;
    }

    start = clock();
    InsertionSort(arr, n);
    end = clock();

    time_spent += (double)(end - start) / CLOCKS_PER_SEC;
    printf("Running time : %f seconds", time_spent);

    printf("\n\nArray after Insertion sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
