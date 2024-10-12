#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    cin>>a[j];
  
    int k=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]%2!=0)
        k++;
    }
      if(n==1)
    cout<<"0"<<endl;
   else if(k==1)
   cout<<"0"<<endl;
   else 
   cout<<k/2<<endl;
}
return 0;
}