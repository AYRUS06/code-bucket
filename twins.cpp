#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;int c=0;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    
}
for(int i=0;i<n;i++)
{
  
    
    c=c+a[i];
}
int k=0;int i=0;
while(k<=c/2)
{
 k=k+a[i];
 i++;
}
cout<<i<<endl;

return 0;
}
