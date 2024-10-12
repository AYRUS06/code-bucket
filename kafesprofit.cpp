#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    int k = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] >= a[i])
        {
            k++;
        }
        else
        {
            if (k > max)
            {
                max = k;
            }
            k = 1;
        }
    }
    cout << max << endl;

    return 0;
}