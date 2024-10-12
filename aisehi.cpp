#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ar[n];
        bool f = true;
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
            if (ar[j] == 0)
                f = false;
        }
        if (f == true)
            cout << "100" << endl;
        else
        {
            f = true;
            for (int j = 0; j < m; j++)
            {
                if (ar[j] == 0)
                    f = false;
            }
        
        if (f == true)
            cout << k << endl;
        else
            cout << "0" << endl;
        }
    }
    return 0;
}
