#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int f = 0;
        int t = 0;
        int t1 = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a == h && b == m)
            {
                f = 1;
                break;
            }
            else
            {int k=abs(h-a);
            int k1=abs(m-b);
            if(t<k)
            {
                t=k;t1=k1;
            }
            else if(t==k&&t1<k1)
            {
              t=k;t1=k1;
            }
            }
        }
        if(f==1)
        cout<<"0 0"<<endl;
        else
        cout<<t<<" "<<t1<<endl;
    }
    return 0;
}