#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int x,y;
cin>>x>>y;
int r=0;
if(x>=y)
y=x;
if(y==1)
cout<<"1/1"<<endl;
else if(y==2)
cout<<"5/6"<<endl;
else if(y==3)
cout<<"2/3"<<endl;
else if(y==4)
cout<<"1/2"<<endl;
else if(y==5)
cout<<"1/3"<<endl;
else
cout<<"1/6"<<endl;
return 0;
}
