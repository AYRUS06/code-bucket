#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int a[], int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int i, j, k, a1[n1], a2[n2];
    for (i = 0; i < n1; i++)
    {
        a1[i] = a[s + i];
    }
    for (j = 0; j < n2; j++)
    {
        a2[j] = a[mid + 1 + j];
    }
    k = s;
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            a[k] = a1[i];
            i++;
        }
        else
        {
            a[k] = a2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = a1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = a2[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int s, int e)
{
    if (s < e)
    {
        int mid = (s + e) / 2;
        mergesort(a, s, mid);
        mergesort(a, mid + 1, e);
        merge(a, s, mid, e);
    }
}

int main()
{
    int i, n;
    n = 300000;
    int a[n];
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        a[i] = rand();
        printf("%d ", a[i]);
    }
    double time;
    clock_t begin, end;
    begin = clock();

    mergesort(a, 0, n - 1);
    end = clock();
    time=((double)(end-begin));
    printf("\nSorted List\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\ntime taken for function() %li miliseconds.\n", (long int)time);

    return 0;
}