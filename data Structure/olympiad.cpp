#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
vector<int> v;
int p,m,s;p=m=s=0;
for(int i=0;i<n;i++)
{int a;
 cin>>a;
 v.push_back(a);
 if(a==1)
 p+=1;
 else if(a==2)
 m+=1;
 else 
 s+=1;
}
if(p<1||m<1||s<1)
cout<<"0"<<endl;
else
{int small=min({p,m,s});
  vector<int> v1,v2,v3;
  for(int i=0;i<n;i++)
  {
      if(v[i]==1)
      v1.push_back(i);
      else if(v[i]==2)
      v2.push_back(i);
      else
      v3.push_back(i);
  }
  cout<<small<<endl;int i=0;
  while(small>0)
  {
      cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;
      small--;i++;
  }
}

return 0;
}