#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
if(t>=1&&t<=100)
if(t==2)
cout<<"NO"<<endl;
else if(t%2==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}