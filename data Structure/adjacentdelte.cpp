#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string a;
        char q;
        cin >> a >> q;
        int f=1;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == q && j % 2 == 0 && (a.length() - j + 1) % 2 == 0)
                {
                   f=0;
                    break;
                }
            
        }
        if(f==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}