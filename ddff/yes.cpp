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
    if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='s'||s[2]=='S'))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

return 0;
}