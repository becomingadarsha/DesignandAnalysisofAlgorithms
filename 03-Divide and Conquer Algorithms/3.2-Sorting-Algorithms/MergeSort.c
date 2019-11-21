#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void mergeArray(int *arr, int start, int mid, int end) {
    int i, j, k;
    int n1 = mid - start + 1; // length of left part array
    int n2 = end - mid; // len of right part of arr

    int L[n1], R[n2]; // left and right array

    for (i = 0; i < n1; i++)
    {
       L[i] = arr[start + i];
    }
    
    for (j = 0; j < n2; j++)
    {
       R[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++ ;
        }   else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // checks if some elemnts are remaining in left array
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

 // checks if some elemnts are remaining in right array
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}


void mergeSort(int *arr, int start, int end)
{
    int mid;
    if (start < end) {
        mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        mergeArray(arr, start, mid, end);
    }
}

int main(int argc, char const *argv[])
{
    int arr[100], n;
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
    printf("Running time : %f seconds", total_time);

    printf("\n\nArray after Merge sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
