#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
string s;
if(n<26)
cout<<"NO"<<endl;
else
{
  cin>>s;
  
  transform(s.begin(),s.end(),s.begin(),::tolower);
  string c="abcdefghijklmnopqrstuvwxyz";int f=1;
  for(int i=0;i<c.length();i++)
  {if(s.find(c[i])==string::npos)
    f=0; }
    if(f==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

return 0;
}