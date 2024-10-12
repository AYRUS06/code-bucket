#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int x,y,z;
cin>>x>>y>>z;
if(x>y&&(x-y-z)>0)
cout<<"+"<<endl;
else if(y>x&&(y-x-z>0))
cout<<"-"<<endl;
else if(x=y&&z==0)
cout<<"0"<<endl;
else if(x==0&&y==0&&z==0)
cout<<"0"<<endl;
else 
cout<<"?"<<endl;

return 0;
}