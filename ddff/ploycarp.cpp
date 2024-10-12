#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    string s;
    cin>>s;
    unordered_set<char> c;int k=0;
    for(int j=0;j<s.size();j++)
    {
         if(c.size()==3&& c.find(s[j])==c.end())
       {k++;c.clear();}
       c.insert(s[j]);
    }
    if(c.empty())
    cout<<k<<endl;
    else
    cout<<k+1<<endl;
    
}

return 0;
}