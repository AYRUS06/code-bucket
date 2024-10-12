#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
int x[n];int y[n];
for(int i=0;i<n;i++)
{
   cin>>x[i]>>y[i];
}
int l,r;l=r=0;
for(int i=0;i<n;i++)
{
    if(x[i]<0)
    l++;
    else if(x[i]>0)
    r++;
}
if(l<=1||r<=1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}