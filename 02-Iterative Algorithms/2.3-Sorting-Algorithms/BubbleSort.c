#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    // to store execution time of code
    double time_spent = 0.0;
    clock_t begin, end;

    int arr[40], n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000 ;
    }

    begin = clock();

    BubbleSort(arr, n);

    end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elpased is %f seconds", time_spent);


    printf("\n\nAfter Bubble sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
