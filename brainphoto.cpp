#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 char a[n][m];int f=0;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
    { cin>>a[i][j];
      if(a[i][j]=='Y'||a[i][j]=='M'||a[i][j]=='C')
      {
          f=1;
      }
    }
 }
 if(f==0)
 cout<<"#Black&White"<<endl;
 else
 cout<<"#Color"<<endl;

return 0;
}