#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j;
    int n=10;
    int a[n];
    double tim;
    clock_t begin, end;
    
    printf("Unsorted Array: ");
    srand(time(0));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ",a[i]);
    }
    // int a[]={4,6,6,8,1,2,4,3,5,1};
    int largest=-1;
    begin=clock();
    for(i=0;i<n;i++)
    {
       if(a[i]>largest)
       largest=a[i];
    }
    //printf("Largest element: %d\n",largest);

    int c[largest+1], b[n];
    //Initialize to zero
    for(i=0;i<=largest;i++)
        c[i]=0;
    //Put the frequencies
    for(i=0;i<n;i++)
        c[a[i]]=++c[a[i]];
    //find cumulative sum

    //Frequency
    // for(i=0;i<=largest;i++)
    // {
    //     printf("%d ",c[i]);
    // }
    for(i=1;i<=largest;i++)
    {
        c[i]=c[i]+c[i-1];
       // printf("%d ",c[i]);
    }
    //put in the new array
    for(i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]-=1;
    }
    end=clock();
    printf("\nSorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    tim= ((double)(end-begin));
    printf ("\ntime taken for function() %li miliseconds.\n",(long int)tim );

   
    return 0;
}