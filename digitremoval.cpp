#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(int n, int d)
{ int k=n;int p=0;int r=0;
  while(n>0)
  {
      int x=n%10;n=n/10;
      r++;
      if(x==d)
      {
       n=n*pow(10,r)+(x+1)*pow(10,r-1);
       p=n-k;
       r=0;
      }
  }
  return p;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
   {int n;int d;
       cin>>n>>d;
       cout<<check(n,d);
   }
}