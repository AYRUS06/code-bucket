// C++ implementation QuickSort
// using Lomuto's partition Scheme.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
// This function takes last element
// as pivot, places
// the pivot element at its correct
// position in sorted array, and
// places all smaller (smaller than pivot)
// to left of pivot and all greater
// elements to right of pivot
int partition(int arr[], int low, int high)
{
    // pivot
    int pivot = arr[high];

    // Index of smaller element
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller
        // than or equal to pivot
        if (arr[j] <= pivot)
        {

            // increment index of
            // smaller element
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return (i + 1);
}

// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
int partition_r(int arr[], int low, int high)
{
    // Generate a random number in between
    // low .. high
    srand(time(0));
    int random = low + rand() % (high - low);

    // Swap A[random] with A[high]
    swap(arr,random,high);

    return partition(arr, low, high);
}

/* The main function that implements
QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        /* pi is partitioning index,
        arr[p] is now
        at right place */
        int pi = partition_r(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


// Driver Code
int main()
{
    int n = 10;
    int arr[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()&100+1;
        printf("%d ", arr[i]);
    }
    double tim;
    clock_t begin, end;
    begin = clock();
    quickSort(arr, 0, n - 1);
    end = clock();
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    tim= ((double)(end-begin));
    printf ("\ntime taken for function() %li miliseconds.\n",(long int)tim );

    return 0;
}


























/*Algorithm:

QUICKSORT (array A, start, end)     
{  
 1 if (start < end)     
 2 {  
3 p = partition(A, start, end)  
4 QUICKSORT (A, start, p - 1)    
5 QUICKSORT (A, p + 1, end)    
6 }   
}  
Partition Algorithm:

The partition algorithm rearranges the sub-arrays in a place.

PARTITION (array A, start, end)     
{  
 1 pivot ? A[end]     
 2 i ? start-1     
 3 for j ? start to end -1 {  
 4 do if (A[j] < pivot) {    
 5 then i ? i + 1     
 6 swap A[i] with A[j]   
 7  }}   
 8 swap A[i+1] with A[end]     
 9 return i+1  
}  */