#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{string s;
cin>>s;
int l=s.length();int k=0;
for(int i=l-1;i>0;i--)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      {k=i+1;break;}
    else
    continue;
}
cout<<k<<endl;

return 0;
}