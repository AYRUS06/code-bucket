#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
    cin>>n;
    int a[n];int k=0;
    for(int j=0;j<n;j++)
    {
        cin>>a[i];
        if(k<a[i])
        k=a[i];
    }int r=0;
    for(int j=0;j<n-1;j++)
    {
        if(a[j]!=a[j+1])
        r=1;
    }
    if(r==0)
    cout<<"-1"<<endl;
    else
    {int l=0;
         for(int j=0;j<n;j++)
       {
        if(a[j]==k)
        {
          l=j;
          
        }
       }

    }

}
return 0;
}