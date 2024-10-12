#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
string s;int a[58]={0};
cin>>n>>s;
for(int i=0;i<n;i++)
{
    if(s[i]>=65&&s[i]<=97)
        s[i]=s[i]+32;
    
        a[s[i]]+=1;
}
int f=1;
for(int i=47;i<58;i++)
{   cout<<a[i]<<" ";
    if(a[i]<1)
    {
        f=0;break;
    }
}
if(f==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;
}