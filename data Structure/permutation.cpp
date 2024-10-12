#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
    cin>>n;
    vector<int> v;
    
    for(int j=0;j<n;j++)
    {int a;
        cin>>a;
        v.push_back(a);
    }int k=0;int l=n;
    while(l>1)
    {
        if(upper_bound(v.begin()+k+1,v.end(),v[k])==v.end())
        {  if(k<n-1)
            k++;
            else
            break;
        }
        
        {
          l--;
            
        }
    }
    if(l==1)
    cout<<"Yes"<<endl;
    else
    cout<<"NO"<<endl;
}
return 0;
}