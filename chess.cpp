#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    if(a==p&&b==q)
    cout<<"0"<<endl;
    else if((a+b)%2==0&&(p+q)%2==0)
    cout<<"2"<<endl;
    else if((a+b)%2!=0&&(p+q)%2!=0)
    cout<<"2"<<endl;
    else
    cout<<"1"<<endl;

}
return 0;
}