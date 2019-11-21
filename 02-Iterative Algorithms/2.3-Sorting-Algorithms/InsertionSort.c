#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertionSort(int *arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
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
