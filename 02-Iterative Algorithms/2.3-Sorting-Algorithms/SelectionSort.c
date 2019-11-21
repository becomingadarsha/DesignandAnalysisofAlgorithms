#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void SelectionSort(int *arr, int n) {
    int i, j, min, temp;

    for ( i = 0; i < n - 1; i++)
    {
        min = i;
       for (j = i+1; j < n; j++)
       {
            if (arr[j] < arr[min]) {
                min = j;
            }
       }
       
       temp = arr[i];
       arr[i] = arr[min];
       arr[min] = temp;
    }
    
}



int main(int argc, char const *argv[])
{
    int arr[50], n, i;
    double time_spent = 0.0;
    clock_t start, end;

    printf("Enter size of array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
       arr[i] = rand() % 1000 ;
    }

    start = clock();
    SelectionSort(arr, n);
    end = clock();

    time_spent += (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time elpased is %f seconds", time_spent);


    printf("\n\nAfter Insertion sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
