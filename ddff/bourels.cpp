#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
  long long int m;long long int d=0;
  cin>>m;
  long long int k=log10(m);
  d=m-pow(10,k);
  cout<<d<<endl;
}
return 0;
}