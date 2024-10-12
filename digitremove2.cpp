
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(int n, int d)
{
    int l = 0;
    int m = n;
    int e = 0;
    int r = 0;
    int s = 0;
    int q = 0;
    while (n > 0)
    {
        int x = n % 10;

        if (x == d)
        {
            l++;
            r = e;
        }
        e++;
        n = n / 10;
    }
    int c=pow(10,r+1);
    c=m/c;
    c=c%10;
    if (l == 0)
    {

        return 0;
    }
   else if(c==8&&d==9)
   { int h = pow(10, r);
        int p = m / h;
        p=p+11;
        s = p * h;
        return (s - m);
    
   }
    else
    {
        int h = pow(10, r);
        int p = m / h;
        p++;
        s = p * h;
        return (s - m); 
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int d;
        cin >> n >> d;
        if(n==0)
        {
        cout<<1<<endl;
        break;
        }
        if (d == 0)
        {
            int m = n;
            int r = 0;
            int e = 0;
            while (n > 0)
            {
                e++;
                int x = n % 10;
                if (x == 0)
                    r = e;

                n = n / 10;
            }
            int k = pow(10, r);
            int p = m / k;
            int s = p;
            for (int j = 0; j < r; j++)
            {
                s = s * 10 + 1;
            }
            cout << (s - m) << endl;
        }
      
        
            cout << check(n, d) << endl;
        
    }

    return 0;
}