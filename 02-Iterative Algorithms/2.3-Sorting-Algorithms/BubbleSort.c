#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp =  *x;
    *x = *y;
    *y = temp;
}


void BubbleSort(int *arr, int n)
{
    int i,j;
    int flag;
    for (i = 0; i < n - 1; i++) // no of passes, n = no of actual ele in arr
    {
        flag =0;
        for (j = 0; j < n - 1 - i; j++) // no of comparision within one pass (when no of pass increase no of comparsion decrease by i)
        {
            if (arr[j] > arr[j + 1])
            {
              swap(&arr[j], &arr[j+1]);
              flag = 1;
            }
        }
        if(flag == 0) break;
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
        arr[i] = rand() % 1000;
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
