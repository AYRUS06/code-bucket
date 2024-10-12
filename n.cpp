#include <iostream>
using namespace std;
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
         
        if (arr[j] < pivot) 
        { 
            i++; 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
    } 
    // swap(&arr[i + 1], &arr[high]); 
     int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
   
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 


int main()
{
   int t;
   cin>>t;
    int arr[t];
   for(int i=0; i<t; i++)
     cin>>arr[i];
     quickSort(arr, 0, t-1);
    int sum =0;
 for(int i =0 ; i<t; i++)
     sum+=arr[i];
     int j = t-1;
     int new_sum = 0;
  while( sum >= new_sum  ||  arr[j+1] == arr[j] ){
      new_sum+= arr[j];
      sum -= arr[j];
      j--;
  }
 for( int i = j+1; i<t; i++)
      cout<<arr[i]<<" ";
         
    return 0;
}