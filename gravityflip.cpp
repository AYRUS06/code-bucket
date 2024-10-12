#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
int m=0;vector<int> v;
for(int i=0;i<n;i++)
{cin>>m;v.push_back(m);}
sort(v.begin(),v.end());
for(int i=0;i<n;i++)
cout<<v[i]<<" ";
return 0;
}