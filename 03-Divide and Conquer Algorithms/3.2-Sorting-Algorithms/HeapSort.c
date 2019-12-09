// Concept : An element is in sorted position if all the elements on the LHS is smaller than that element // and all the elements on RHS should be greater than that element then that element is in the osrted
// position , rest of the elements may or maynot be sorted

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxHeapify(int *arr, int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;   // rightmost side (non-leaf)node
    int l = 2 * i + 1; // left child
    int r = 2 * i + 2; // right child

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    // Swap and continue heapifying if root is not largest
    if (largest != i) // checking if largest isn't updated
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void HeapSort(int *arr, int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    { // n/2 means half of binary tree -1 since array index is one less(in code) and i>=0 as it shows root node
        maxHeapify(arr, n, i);
    }

    // Heap sort -> delete elements from max heap
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        // Heapify root element to get highest element at root again
        maxHeapify(arr, i, 0);
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
    HeapSort(arr, n);
    end = clock();

    total_time += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Running time : %f seconds", total_time);

    printf("\n\nArray after Quick sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
