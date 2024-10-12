#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
string ar[n];
for(int i=0;i<n;i++)
cin>>ar[i];

 int k=0;
for(int i=0;i<n;i++)
{
    if(ar[i]=="Tetrahedron")
     k=k+4;
     else if(ar[i]=="Cube")
     k=k+6;
     else if(ar[i]=="Octahedron")
     k=k+8;
     else if(ar[i]=="Dodecahedron")
     k=k+12;
     else if(ar[i]=="Icosahedron")
     k=k+20;
}
cout<<k<<endl;

return 0;
}