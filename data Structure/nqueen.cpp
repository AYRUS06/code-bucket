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
        float x = pow(0.143 * n, n);
        if (x - floor(x) < 0.5)
            cout << floor(x) << endl;
        else
            cout << ceil(x) << endl;
    }

    return 0;
}