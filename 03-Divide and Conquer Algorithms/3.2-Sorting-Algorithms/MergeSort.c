#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void mergeArray(int *arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;         // for new array initial symbol
    int temp[start + end]; // temporary array to store new  combined values

    while ((i <= mid) && (j <= end))
    {

        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            //(arr[j] < arr[i])
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    //if arr[i] is finished but some ele of arr[j] is remaining
    if (i > mid)
    {

        while (j <= end)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    // if arr[j] is finished but some ele of arr[i] remains to sort
    if (j > end)
    {
        while (i <= mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
    }

    // copying sorted value from temp arr to OG array, k = index of new array
    for (int a = start; a < k; a++)
    {
        arr[a] = temp[a];
    }
}

void mergeSort(int *arr, int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        mergeArray(arr, start, mid, end);
    }
}

int main(int argc, char const *argv[])
{
    int arr[SIZE], n;
    clock_t start, end;
    double total_time = 0.00;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    start = clock();
    mergeSort(arr, 0, n - 1);
    end = clock();

    total_time += (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time : %f seconds", total_time);

    printf("\n\nArray after Merge sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
