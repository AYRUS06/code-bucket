#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int c=0;c<t;c++)
{
    int n;
    cin>>n;
    string s;
    cin>>s;int l=0;
    if(n>=10)
    {
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<i+10;j++)
        {   int k=j-i;
            int p=(int)s[i];
            int r=(int)s[j];
            
            if(k==abs(r-p))
              {
                  l++;
              }
        }
    }
    cout<<l<<endl;
    }
    else
     {
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {   int k=j-i;
            int p=(int)s[i];
            int r=(int)s[j];
            
            if(k==abs(r-p))
              {
                  l++;
              }
        }
    }
    cout<<l<<endl;
    }
}

return 0;
}