#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int binary_search_iterative(int a[],int start,int end,int key)
{
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]<key)
        start=mid+1;
        else 
        end=mid-1;
    }
    return -1;
}
int binary_search_recursive(int a[],int start,int end,int key)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]<key)
        return binary_search_recursive(a,mid+1,end,key);
        else return binary_search_recursive(a,start,mid-1,key);
    }
    return -1;
}
int main()
{
    int a[]={23,25,31,40,55,65,66,79,81,86,99,100};
    int n=sizeof(a)/sizeof(a[0]);
    int key=86;
    clock_t begin1, end1, begin2, end2;
    begin1=clock();
    int pos1=binary_search_iterative(a,0,n-1,key);
    end1=clock();
    begin2=clock();
    int pos2=binary_search_recursive(a,0,n-1,key);
    end2=clock();
    printf("\nSearched key: %d",key);
    printf("\nResult of iterative binary search: %d",pos1);
    clock_t tim = ((double)(end1 - begin1));
    printf("\ntime taken for function() %li miliseconds.\n", tim);
    printf("\nResult of recursive binary search: %d",pos2);
    clock_t time2=((double)(end2-begin2));
    printf("\ntime taken for function() %li miliseconds.\n", time2);
    return 0;
}