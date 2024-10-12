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
        string s;
        cin >> s;
        int k = 0;
        int l, m;
        l = m = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if ((s[j] == '0' && s[j + 1] == '1')||(s[j] == '1' && s[j + 1] == '0'))
                k = 1;
        }
        if (k == 0)
            cout << "BOB" << endl;
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '0')
                    l++;
                else
                    m++;
            }
            if (l == m)
            {
                if (l % 2 == 0)
                    cout << "BOB" << endl;
                else if (l % 2 != 0)
                    cout << "ALICE" << endl;
            }
            else if (l > m)
            {
                if (m % 2 == 0)
                    cout << "BOB" << endl;
                else if (m % 2 != 0)
                    cout << "ALICE" << endl;
            }
            else if (l < m)
            {
                 if (l % 2 == 0)
                    cout << "BOB" << endl;
                else if (l % 2 != 0)
                    cout << "ALICE" << endl;
            }
        }
    }

    return 0;
}