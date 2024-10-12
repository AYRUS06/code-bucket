#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int getMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int a[], int n, int place)
{
    int output[n + 1];
    int count[10];
    int i;
    for (i = 0; i < 10; i++)
        count[i] = 0;
    for (i = 0; i < n; i++)
        count[(a[i] / place) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for(i=n-1;i>=0;i--)
    {
        output[count[(a[i]/place)%10]-1]=a[i];
        count[(a[i]/place)%10]--;
    }
    for(i=0;i<n;i++)
        a[i]=output[i];
}
void radixSort(int a[],int n)
{
    int max=getMax(a,n);
    for(int place=1;max/place>0;place*=10)
    countSort(a,n,place);
}
int main()
{
    int i,n=10, a[n];
    double tim;
    srand(time(0));
    printf("Entered elements: ");
    for(i=0;i<n;i++)
    {
        a[i]=rand();
        printf("%d ",a[i]);
    }
    printf("\n");
    clock_t begin,end;
    begin=clock();
    radixSort(a,n);
    end=clock();
    tim=((double)(end-begin));
    printf("Output elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Total time taken: %lf ms",tim);
}






















/*radixSort(arr)  
max = largest element in the given array  
d = number of digits in the largest element (or, max)  
Now, create d buckets of size 0 - 9  
for i -> 0 to d  
sort the array elements using counting sort (or any stable sort) according to the digits at  
the ith place  */