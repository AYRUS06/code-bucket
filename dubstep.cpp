#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{string n;
cin>>n;
int l=n.length();string s="WUB";n=n+" ";string b="";
for(int i=3;i<l-3;i++)
{
 if(n[i]!='W'||n[i+1]!='U'||n[i+2]!='B')
 {
   b=b+n[i];
 }
 else if(n[i]=='W'&&n[i+1]=='U'&&n[i+2]=='B')
 {
     b=b+" ";
     i=i+2;
 }

}
cout<<b<<endl;

return 0;
}