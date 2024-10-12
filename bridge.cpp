#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        for (int j = 1; j < n; j++)
        {
            cout << j << " " << j + 1 << endl;
        }
        if (n == m)
            cout << 1 << " " << 3 << endl;
        else if (m > n)
        {
            int k = 4;int c=m-n;int p=2;
            cout << "1 3" << endl;
            while(c>0)
            { 
                int r = 1;
                int t = r;
                while ((r < t + p)&&(c>0))
                {
                    cout << r++ << " " << k << endl;
                    c--;
                }
                k++;p++;
            }
        }
    }
    return 0;
}