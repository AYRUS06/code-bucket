#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<float> y ={132,139.1,146.,154,160,170,176,182.9};
    vector<int> t={1,2,3,4,5,6,7,8};
    float sumy=y.accumulate(y.begin(),y.end(),0);
    int sumt=t.accumulate(t.begin(),t.end(),0);
    float b, a;float k=0;int s=0;
    for(int i=0;i<8;i++)
    {
        k+=y[i]*t[i]; s+=t[i]*t[i];
    }
    b=(8*k-sumy*sumt)/(8*s-sumt*sumt);
    a=(sumy-b*sumt)/n;
    cout<<"f="+b+"+"+a+"t"<<endl;
    return 0;
}