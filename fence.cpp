#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n,h;
cin>>n>>h;
int a[n];int k=0;
for(int i=0;i<n;i++)
{
 cin>>a[i];
 if(a[i]>h)
   k=k+2;
 else
  k=k+1;
}
cout<<k<<endl;

return 0;
}