#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{long long int k,n,w;
cin>>k>>n>>w;long long int b[w];long long int t=0;
for(long long int i=1;i<=w;i++)
{
    b[i-1]=i*k;
    t=t+b[i-1];
}
long long int br=t-n;
 if(br<=0)
  cout<<0<<endl;
else
 cout<<br<<endl;
}