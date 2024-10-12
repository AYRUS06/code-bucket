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
    int a[n][n];int s=0;int z=0;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            cin>>a[j][k];
            if(a[j][k]==1)
            s++;
            else
            z++;
        }
    }
    int res=0;
if(s<z)
{
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[j][k]==1&&a[k][j]!=1)
            {a[k][j]=1;res++;}
        }
    }
}
else
{
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[j][k]==0&&a[k][j]!=0)
            {a[k][j]=0;res++;}
        }
    }
}
cout<<res<<endl;
}

return 0;
}