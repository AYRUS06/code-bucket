#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
string x,y;
cin>>x>>y;
string c="";
for(int i=0;i<x.length();i++)
{
    if(x[i]!=y[i])
    c=c+"1";
    else
    c=c+"0";
}
cout<<c<<endl;
return 0;
}