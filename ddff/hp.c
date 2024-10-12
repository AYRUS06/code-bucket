#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void maxHeapify(int a[], int n, int i)
{
    int lar = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[left] > a[lar])
        lar = left;
    if (right < n && a[right] > a[lar])
        lar = right;
    if (lar != i)
    {
        swap(a, lar, i);
        maxHeapify(a, n, lar);
    }
}
void heapsort(int a[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(a, n, i);
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n\n");
    }

    

    for (int i = n - 1; i > 0; i--)
    {
        swap(a, i, 0);
        maxHeapify(a, i, 0);
    }
}
int main()
{
    int n = 9;

    int a[n];
    
    printf("\n\n");
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
    }
    double tim;
    clock_t begin, end;
    begin = clock();
    heapsort(a, n);
    end = clock();
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    tim = ((double)(end - begin));
    printf("\ntime taken for function() %li miliseconds.\n", (long int)tim);
    return 0;
}































/*HeapSort(arr)  
BuildMaxHeap(arr)  
for i = length(arr) to 2  
    swap arr[1] with arr[i]  
        heap_size[arr] = heap_size[arr] ? 1  
        MaxHeapify(arr,1)  
End  
BuildMaxHeap(arr)

BuildMaxHeap(arr)  
    heap_size(arr) = length(arr)  
    for i = length(arr)/2 to 1  
MaxHeapify(arr,i)  
End  
MaxHeapify(arr,i)

MaxHeapify(arr,i)  
L = left(i)  
R = right(i)  
if L ? heap_size[arr] and arr[L] > arr[i]  
largest = L  
else  
largest = i  
if R ? heap_size[arr] and arr[R] > arr[largest]  
largest = R  
if largest != i  
swap arr[i] with arr[largest]  
MaxHeapify(arr,largest)  
End   */