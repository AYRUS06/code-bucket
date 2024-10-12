#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int x,y,n;
    cin>>n>>x>>y;
    if(y*(n+1)>=x)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

return 0;
}