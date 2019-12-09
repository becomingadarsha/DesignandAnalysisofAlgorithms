// Concept : An element is in sorted position if all the elements on the LHS is smaller than that element // and all the elements on RHS should be greater than that element then that element is in the osrted 
// position , rest of the elements may or maynot be sorted

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


int Partition(int *arr, int start, int end) {
    int pivot = arr[start]; // first element will be pivot
    int i = start;
    int j = end;

    // till i is less than j ; where i& j are indexes
    while(i < j) {

        do { // increase the value of i untill we find element greater than pivot [if greater stop]
            i++ ;
        }  while(arr[i] <= pivot);
    
        do{ // decrease value of j untill we find ele lesser or equal than pivot [if small or equal stop]
            j--;    
        }  while(arr[j] > pivot);   

        // swap if i < j
        if(i < j) {
            swap(&arr[i], &arr[j]); 
        }
    }
     
    swap(&arr[start], &arr[j]);// swap pivot element with A[j]

    return j;

}

void QuickSort(int *arr, int start, int end) {
    int j;
    if(start < end ) {
        j = Partition(arr, start , end);
        QuickSort(arr, start, j);
        QuickSort(arr, j+1, end);
    } 
}




int main(int argc, char const *argv[])
{
    int arr[MAX], n;
    double total_time = 0.0;
    time_t begin, end;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000;
    }
    
    begin = clock();
    QuickSort(arr, 0, n-1);
    end = clock();

    total_time += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Execution time : %f seconds", total_time);

    printf("\n\nArray after Quick sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}


