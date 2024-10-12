#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n, k;string s;
    cin>>n>>k;
    cin>>s;int l=0;
    for(int j=0;j<n/2;j++)
    {
     if(s[j]!=s[n-j-1])
     l++;
     else
     continue;
    }
    if(k>=l&&(k-l)%2==0)
    cout<<"YES"<<endl;
    else if(k>=l&&n%2==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

return 0;
}