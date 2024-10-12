#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      int a,b,c,d;int k=0;
      cin>>a>>b>>c>>d;
      if(a+b+c<=d)
      {
       k++;
      }
      else if(a+b+c>d)
        {
            if(a+b<=d||b+c<=d||c+a<=d)
            k=k+2;
             else if(a+b>d&&b+c>d&&a+c>d)
             k=k+3;
            
        }
       
        cout<<k<<endl;
  }
return 0;
}