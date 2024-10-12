#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    
    long long ar = a * a;
    if(n<=a&&m<=a)
    {
       cout<<'1'<<endl;
    }
    else if(n<=a&&m>a)
    {
        if(m%a==0)
        {
          cout<<(m/a)<<endl;
        }
        else if(m%a!=0)
        cout<<((m/a)+1)<<endl;
    }
     else if(m<=a&&n>a)
    {
        if(n%a==0)
        {
          cout<<(n/a)<<endl;
        }
        else if(n%a!=0)
        cout<<((n/a)+1)<<endl;
    }
    else if (n == m)
    {
        if (n % a == 0)
        {  long long r=(n*m)/ar;
            cout <<r << endl;
        }else if (n % a != 0)
        {
            
            cout <<( ((n / a) + 1) * ((m / a) + 1))  << endl;
        }
    }
    else if (n != m)
    {
        if (n % a == 0 && m % a == 0)
        {
            long long r= (n*m)/ar;
            cout <<r << endl;
        }
        else if ((n % a == 0 && m % a != 0))
        {
            cout << ((n / a) * ((m / a) + 1)) << endl;
        }
        else if (n % a != 0 && m % a == 0)
        {
            cout <<( (m / a) * ((n / a) + 1) )<< endl;
        }
        else
        {
            cout << (((n / a) + 1) * ((m / a) + 1)) << endl;
        }
    }

    return 0;
}