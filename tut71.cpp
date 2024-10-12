#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
 for(int i=0;i<v.size();i++)
 {
     cout<<v[i]<<" ";
 }
 cout<<endl;
}
int main()
{vector<int> v1;
int ele,n;
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"enter the element in vector :"<<endl;
    cin>>ele;
     v1.push_back(ele);
}
vector<int> :: iterator itr;
itr=v1.begin();
display(v1);
vector<int> :: iterator itr1=v1.begin();
v1.insert(itr1 +2,7);
v1.pop_back();
display(v1);
vector<int> v2;
v2.push_back(9);
v2.push_back(12);
v2.push_back(423);
v2.push_back(122);
v1.swap(v2);
display(v1);
return 0;
}