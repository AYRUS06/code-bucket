#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int n, d0, d1;
        cin >> n;
        cin >> d0 >> d1;
        
       long long int r = d0 * 10 + d1;
        
        for (long long int j = 2; j < n; j++)
        {
            int x = 0;long long int k=r;
            while (k > 0)
            {
               
                x = x + k % 10;
                 k = k / 10;
            }
            r = r*10 + (x % 10) ;
            cout<<r<<endl;
        }
        
        if (r %3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}