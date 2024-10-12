#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
 cin>>n;int a[n];
 for(int j=0;j<n;j++)
 cin>>a[j];
 if(n%2==0)
 {
     for(int j=0;j<n;j+2)
     {
         int t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
     }
 }
 
}

return 0;
}