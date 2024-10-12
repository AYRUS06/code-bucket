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
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
            cin >> a[j];
        sort(a, a + n);
        int r = 1;
        if (a[n] == a[n - 1])
        {
            cout << "-1" << endl;
            r = 0;
        }
        sort(a, a + n, greater<int>());
        int k = 0;
        for (int j = 0; r == 1 && j < n - 1; j++)
        {
            if (a[j] == a[j + 1] && r == 1)
            {
                k++;
                if ((a[j + 1] == a[j + 2]) && (r == 1))
                {
                    cout << "-1" << endl;
                    r = 0;
                }
            }
        }
        if ((k == 0) && (r == 1))
        {
            for (int j = 0; j < n; j++)
                cout << a[j] << " ";
        }

    }

    return 0;
}