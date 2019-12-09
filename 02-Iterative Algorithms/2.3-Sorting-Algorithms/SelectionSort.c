#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int *arr, int n) {
    int i, j, min;

    for (i = 0; i < n - 1; i++)
    {
        min = i; // point first element as minimum
       for (j = i+1; j < n; j++) // move j to next index and compare with the arr[min]
       {
            if (arr[j] < arr[min]) { // compare min element with j and if found make index of j as minimum
                min = j;
            }
       } // move till the last by comparing j with min
       
        // move min element to the first i.e. index of i
        swap(&arr[i], &arr[min]);
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
