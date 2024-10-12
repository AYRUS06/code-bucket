#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
char s[n];string b="";
for(int i=0;i<n;i++)
{cin>>s[i];}int l=0;int u=0;
for(int i=0;i<n;i++)
{
 if(s[i]=='x')
 l++;
 else if(s[i]='X')
 u++;
}int p=0;
if(l==u)
{
   p=0; 
   for(int i=0;i<n;i++)
{b=b+s[i];}
}
else if(l>u)
{int i=0;p=1;
    while(l>u)
    {
        if(s[i]!='x')
       { b=b+'X';u++;i++;}
        else
        {
        b=b+s[i];i++;}
    }
    
}
else
{ int i=0;p=1;
while(l<u)
    {
        if(s[i]!='X')
       { b=b+'x';l++;i++;}
        else
        {b=b+s[i];i++;}
    }

}
cout<<p<<endl;
cout<<b<<endl;
return 0;
}