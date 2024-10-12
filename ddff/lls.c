#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int linear_search_iterative(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int linear_search_recursive(int a[],int n,int key)
{
    if(n==0)
    return -1;
    if(a[n-1]==key)
    return n-1;
    else
    return linear_search_recursive(a,n-1,key);
}
int main()
{
    int a[]={45,34,23,11,67,35,-9,0,56};
    int n=sizeof(a)/sizeof(a[0]);
    // int n=10, a[n];
    // srand(time(0));
    // for(int i=0;i<n;i++)
    // {
    //     a[i]=rand();
    // }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",a[i]);
    // }
    // int key=a[rand()%((n-1)-0+1)+0];
    int key=-9;
    clock_t begin1, end1, begin2, end2;
    begin1=clock();
    int pos1=linear_search_iterative(a,n,key);
    end1=clock();
    begin2=clock();
    int pos2=linear_search_recursive(a,n,key);
    end2=clock();
    printf("\nSearched key: %d",key);
    printf("\nResult of iterative linear search: %d",pos1);
    clock_t tim = ((double)(end1 - begin1));
    printf("\ntime taken for function() %li miliseconds.\n", (long int)tim);
    printf("\nResult of recursive linear search: %d",pos2);
    tim=((double)(end2-begin2));
    printf("\ntime taken for function() %li miliseconds.\n", (long int)tim);
    return 0;
}