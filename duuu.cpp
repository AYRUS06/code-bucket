#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
  int v[6]={1,1,0,0,1,1};
    int r = 0;
    int q = 0;
    for (int i = 0; i < 6; i++)
    {
   if(v[i]==1)
   r++;
   else if(v[i]==0)
   q++;
    }
    int k=abs(r-q)/2+1;
cout<<k;
    return 0;
}