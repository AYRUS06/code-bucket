#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int q;
cin>>q;
for(int i=0;i<q;i++)
{
    int a,b,c;
    cin>>a,b,c;
    int x= (c*a)/(b*b+a*a);
    int y=(b*x)/a;
    cout<<x<<" "<<y;
}
return 0;
}