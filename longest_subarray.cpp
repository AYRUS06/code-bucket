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
        {
            a[j] = j + 1;
        }
        if (n == 1)
            cout << 1 << endl;
        else
        {
            int b[n]={0};
            int l = 1;
             int h = 0;
            for (int j = 0; j < n - 1; j++)
            {
                int k = a[j] & a[j + 1];
               
                if (k > 0)
                    l++;
                else
                {
                    b[h] = l;
                    h++; 
                    l = 1;
                }
            }
            cout << *max_element(b, b + n) << endl;
        }
        return 0;
    }
} 