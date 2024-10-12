#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{ int a[5];
    for(int j=0;j<5;j++)
    cin>>a[j];
    int h=0;int e=0;
    for(int j=0;j<5;j++)
    {
        if(a[j]==1)
        h++;
        else if(a[j]==2)
        e++;
       
    }
    if(e>h)
    cout<<"ENGLAND"<<endl;
    else if(e==h)
      cout<<"DRAW"<<endl;
      else
      cout<<"INDIA"<<endl;
}
return 0;
}