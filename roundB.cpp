#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    double r,a,b;
    cin>>r>>a>>b;double pi=2*acos(0.0);
    int g=r;int j=0;double result=0.0;
    while(g>=1)
    {result+=pi*g*g;
     if(j%2==0)
        g=g*a;
        else if(j%2==1)
        g=g/b;
        j++;
    }
   cout<<"Case#"<<i<<": "<<result<<" "<<endl;
}

return 0;
}