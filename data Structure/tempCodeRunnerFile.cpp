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
        char p = 'a';
        string g = "";
        for (int j = 0; j < n; j++)
        {
            p++;
            if (p >= 97 && p <= 122)
            {

                g = g + p;
            }
            else if (p == 123)
            {
                p = 96;
            }
        }
        cout << g << endl;
    }
    return 0;
}