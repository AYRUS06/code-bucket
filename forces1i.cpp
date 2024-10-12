#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int b[7];int a[3];
        for(int j=0;j<7;j++)
        cin>>b[j];
        for(int j=0;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                for(int y=k+1;y<6;y++)
                {
                    if((b[j]+b[k]+b[y])==b[6])
                    {
                        a[0]=b[j];a[1]=b[k];a[2]=b[y];
                         break;
                    }
                    else
                    continue;
                }
            }
        }
        for(int j=0;j<3;j++)
        cout<<" "<<a[j];
        cout<<endl;
    }
return 0;
}