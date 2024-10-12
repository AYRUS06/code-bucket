#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int arr[],int a,int b)
{
	int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, mind;

	for (i = 0; i < n-1; i++)
	{
		mind = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[mind])
			mind = j;

		swap(arr,mind, i);
	}
}
int main()
{
    int n=15;
	int arr[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        arr[i]=rand();
		printf("%d ",arr[i]);
    }
	 double tim;
    clock_t begin, end;
    begin = clock();
	selectionSort(arr, n);
    end=clock();
	printf("\nSorted array: \n");
	for (int i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
    tim= ((double)(end-begin));
    printf ("\ntime taken for function() %li miliseconds.\n",(long int)tim );
	return 0;
}






























/*SELECTION SORT(arr, n)  
  
Step 1: Repeat Steps 2 and 3 for i = 0 to n-1  
Step 2: CALL SMALLEST(arr, i, n, pos)  
Step 3: SWAP arr[i] with arr[pos]  
[END OF LOOP]  
Step 4: EXIT  
  
SMALLEST (arr, i, n, pos)  
Step 1: [INITIALIZE] SET SMALL = arr[i]  
Step 2: [INITIALIZE] SET pos = i  
Step 3: Repeat for j = i+1 to n  
if (SMALL > arr[j])  
     SET SMALL = arr[j]  
SET pos = j  
[END OF if]  
[END OF LOOP]  
Step 4: RETURN pos  */