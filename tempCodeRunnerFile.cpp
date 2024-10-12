#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >> d;
        if (d == 0)
        { int m=n;int f=0;int g;
          while(n>0)
          {   f++;int x=n%10;
              if(x==0)
               g=g+1;
          }
        }
        else
        {
            int m = n;
            int e = 0;
            int r = 0;
            int p;
            int q = 0;
            while (n > 0)
            {
                int x = n % 10;
                p = x;
                q = q + x * pow(10, e);
                e++;
                if (x == d)
                    r = e;
                n = n / 10;
            }
            int k = (p + 1) * pow(10, r) - q;
            cout << k << endl;
        }
    }

    return 0;
}