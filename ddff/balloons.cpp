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
    string s;
    cin>>s;
    int a[26]={0};int j=0;
    while(s[j]!='\0')
    {
      int k=s[j]-'A';
      ++a[k];++j;
    }
    int res=0;
    for(int j=0;j<26;j++)
    {
      if(a[j]>0)
      {res=res+a[j]+1;}
      else
      {res=res+a[j];}
    }
    cout<<res<<endl;
}

return 0;
}