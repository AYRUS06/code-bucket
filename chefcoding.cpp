#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,m,k;
    bool f = true;
    cin>>n>>m>>k;int ar[n];
    for(int j=0;j<n;j++){
    cin>>ar[j];
    if 
    }
    int l=0;
    for(int j=0;j<n;j++)
    {
        if(ar[j]>0)
        l++;
        else
        break;
    }
    if(l==m)
    cout<<k<<endl;
    else if(l==n)
    cout<<"100"<<endl;
    else if(l<m)
    cout<<"0"<<endl;
}

return 0;
}