#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ string l;
cin>>l;int a=0;;
for(int i=0;i<l.length();i++)
{
    if(l[i]=='H'||l[i]=='Q'||l[i]=='9')
       {a=1;break;}
    else
    continue;

}
if(a==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;
}