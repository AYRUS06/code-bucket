#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,k;int r=0;
    cin>>n;
    while(n%2!=0)
    {
        cin>>n;
    }
    cin>>k;
    int a[]={2,4,8,16,32,64,128,256,524,1024,2048 , 4096 ,8192 , 16384 , 32768 , 65536 ,131072 ,262144 , 524288, 1048576 , 2097152 , 4194304 , 8388608 , 16777216 , 33554432 , 67108864 , 134217728 , 268435456 , 536870912 , 1073741824 , 2147483648, 4294967296};
for(int j=0;i<32;j++)
{
   if(n==a[j])
    {
        r=k%(j+1);break;
    }
}
for

}

return 0;
}