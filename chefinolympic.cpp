#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n, q;
        cin >> n >> q;
        int p[n][3];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < 3; j++)
                cin >> p[i][j];
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            int l = 1;
            for(int j=1;j<k;j++)
            {  int f=0;
                if (p[0][0] > p[j][0])
                   f=1;
                 else if(p[0][0]<=p[j][0])
                 {
                  if()
                 }
            }
        }
    }

    return 0;
}