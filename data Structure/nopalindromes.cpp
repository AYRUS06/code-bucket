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
        string g = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        int x = n / 26;
        if (n > 26)
        {
            while (x)
            {
                ans += g;
                x--;
            }
            ans += g.substr(0, n - 26);
        }
        else
        {
            ans += g.substr(0, n);
        }
        cout << ans << endl;
    }
    return 0;
}

