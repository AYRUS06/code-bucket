#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
          if(n%2==0)
          cout<<(n/2)*2<<endl;
          else
          cout<<(n/2)*n<<endl;
        }
    }
    else if(n!=m)
    {
        if(n==1&&m>1)
        {  float r=ceil( m/3);
            cout<<r<<endl;
        }
        else if(m==1&&n>1)
        {
             float r=ceil( n/3);
            cout<<r<<endl;
        }
        else if(m>1&&n>1)
        {
            if(n%2==0&&m%2!=0)
            cout<<(m/2)*n<<endl;
            else if(m%2==0&&n%2!=0)
            cout<<(n/2)*m<<endl;
            else if(n%2==0&&m%2==0)
            cout<<((n*m)/2)<<endl;
            else if(n%2!=0&&m%2!=0)
            {
                if(n>m)
                cout<<(m/2)*n<<endl;
                else if(m>n)
                cout<<(n/2)*m<<endl;
            }
        }
    }
}
return 0;
}