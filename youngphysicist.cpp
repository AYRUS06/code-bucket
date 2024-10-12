#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
int a[n][3];
for(int i=0;i<n;i++)
{
    for(int j=0;j<3;j++)
    cin>>a[i][j];
}

for(int i=1;i<n;i++)
{
    a[0][0]+=a[i][0];
     a[0][1]+=a[i][1];
      a[0][2]+=a[i][2];
}
if(a[0][0]==0&&a[0][1]==0&&a[0][2]==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;
}