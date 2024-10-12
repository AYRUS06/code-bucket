#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
      cin>>arr[i];
   int brr[60] = {0};
    int temp;
for(int i=0; i<n; i++)
  {   temp = (arr[i]%60);
          brr[temp]++;
  }
  int count =0;
    count = brr[0]/2 + brr[30]/2;
for( int i=1; i<30; i++)
   {  if(brr[i] > brr[60 - i])
             count += brr[i];
            else
              count+= brr[60-i];

   }
      cout<<count<<"\n";
}