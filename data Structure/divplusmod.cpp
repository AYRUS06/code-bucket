#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int l, r, a, q, t, f;
        f = 0;
        q = 0;
        cin >> l >> r >> a;
        long long int k = r / a;
        k = k * a;
        if (k > l && k <= r + 1)
        {
            k = k - 1;
            f = k / a + k % a;
        }
        q = r / a + r % a;

        cout << max(q, f) << endl;
    }

    return 0;
}