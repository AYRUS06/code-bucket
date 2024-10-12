#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int m;
    cin >> m;
    int x[m];
    int y[n];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < m; i++)
    {
        int l1 = -y[i] - x[i] + d;
        int l2 = -y[i] - x[i] + 2 * n - d;
        int d1 = x[i] - d - y[i];
        int d2 = x[i] + d - y[i];
        if ((x[i] == 0 && y[i] == 0))
            cout << "NO" << endl;
        else if (l1 * l2 <= 0 && d1 * d2 <= 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}