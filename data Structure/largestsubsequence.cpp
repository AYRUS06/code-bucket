#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    int n = s.length();
    int max = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[int(s[i]) - 97] == 0 && a[int(s[i]) - 97] < 2)
        {
            a[int(s[i]) - 97]++;
            k++;
        }
        if (a[int(s[i]) - 97] == 2)
        {
            max = k;
            k = 0;
            for (int i = 0; i < 26; i++)
                a[i] = 0;
        }
    }

    cout << max;
}