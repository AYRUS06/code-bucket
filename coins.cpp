#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int x,y;
    cin>>x;
    if(x%2==0&&y%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

return 0;
}