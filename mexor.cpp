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
        if (n == 0)
            cout << 1 << endl;
        else if (n == 1)
            cout << 2 << endl;
        else if (n == 2)
            cout << 2 << endl;
        else 
        {
           long long  int a[10];
            for (int j = 0; j < 10; j++)
                a[j] = pow(2, j)-1;

            for (int j = 0; j < 15; j++)
            {
                if (a[j] >n)
                {
                    int r = j - 1;
                    cout << pow(2, r) << endl;
                    break;
                }
                else 
                continue;
            }
        }
    } 
    return 0;
}