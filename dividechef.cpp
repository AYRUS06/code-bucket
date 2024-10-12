#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int s = 0;
        if (n % 2 == 0)
        {
            for (int j = 2; j < n; j++)
            {
                if (a > b)
                {
                    if (n % j == 0)
                    {
                        if (j % 2 == 0)
                        {
                            s = s + a;
                            n = n / j;
                        }
                        else
                        {
                            s = s + b;
                            n = n / j;
                        }
                    }
                }
                if (a < 0)
                {
                    s = s + a;
                    break;
                }
            }
        }
        if (n % 2 != 0)
        {
            for (int j = 2; j < n; j++)
            {
                if (a < b)
                {
                    if (n % j == 0)
                    {
                        if (j % 2 != 0)
                        {
                            s = s + b;
                            n = n / j;
                        }
                        else
                        {
                            s = s + a;
                            n = n / j;
                        }
                    }
                }
                if (b < 0)
                {
                    s = s + b;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}