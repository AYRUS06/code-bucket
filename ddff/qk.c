#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int a[], int l, int h)
{
    int pivot = a[h];
    int i = l - 1;
    int j;
    for (j = l; j <= h - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a, i, j);
        }
    }
    swap(a, i + 1, h);
    return i + 1;
}
void quickSort(int a[], int i, int j)
{
    if (i < j)
    {
        int p = partition(a, i, j);
        quickSort(a, i, p - 1);
        quickSort(a, p + 1, j);
    }
}
int main()
{
    int n = 20;
    int i;
    int a[n];
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        a[i] = rand();
        printf("%d ", a[i]);
    }
    double tim;
    clock_t begin, end;
    begin = clock();
    quickSort(a, 0, n - 1);
    end=clock();
    printf("\nSorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    tim= ((double)(end-begin));
    printf ("\ntime taken for function() %li miliseconds.\n",(long int)tim );
    return 0;
}