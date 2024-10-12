#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{string s;
cin>>s;
 char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'u', 'v', 'r', 's', 't', 'w', 'x', 'y', 'z'};
int l=s.length();int k=k+min(int(s[0])-97, 1+122-int(s[0]));
for(int i=1;i<l;i++)
{
  k= k+min(abs(int(s[i-1])-int(s[i])),abs(abs(int(s[i-1])-int(s[i]))-26));
}
cout<<k<<endl;
return 0;
}