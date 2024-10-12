#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int b[n];
        for (int j = 0; j < n; j++)
            cin >> b[j];
        int r = 0;
        for (int j = 1; j < n; j++)
        {
            if ((b[j - 1] < b[j]) || (b[j - 1] % b[j] != 0))
                r = 1;
        }
        if (r == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
                cout<< b[j] << " " ;
                cout<<endl;
        }
    }
    return 0;
}