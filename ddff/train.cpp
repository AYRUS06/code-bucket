#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define Faster  ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int j=0;j<n;j++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    for(int j=0;j<k;j++)
    {
        int a,b;
        cin>>a>>b;
        vector<int>::iterator ip;
        vector<int>::iterator ip2;
        ip=find(v.begin(),v.end(),a);
        vector<int> v2={b};
        ip2=find_end(v.begin(),v.end(),v2.begin(),v2.end());
        if(ip<ip2&&ip!=v.end()&&ip2!=v.end())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}

return 0;
}