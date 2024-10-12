#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;long long int x;
cin>>n>>x;
long long int a[n];char b[n];int p=0;int d=0;
for(int i=0;i<n;i++)
{
   cin>>b[i]>>a[i];
   if(b[i]=='+')
   {
       x=x+a[i];
   }
   else if(b[i]=='-')
   {
       if(a[i]>x)
       d++;
       else if(a[i]<=x)
       x=x-a[i];
   }

}
cout<<x<<" "<<d<<endl;

return 0;
}