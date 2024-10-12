#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int x,y,z;
    cin>>x>>y>>z;
    int r=x+y;
    if(r<=z)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
return 0;
}