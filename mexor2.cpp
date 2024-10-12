#include <bits/stdc++.h>
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ffor(i, a, n) for (int i = a; i < n; i++)
#define T     \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int main()
{
    vector<ll> v;
    v.push_back(0);
    ffor(i, 1, 32)
    {
        v.push_back((pow(2, i) - 1));
    }
    T
    {
        int n;
        cin>>n;

        int i = 0;
        while (v[i] <= n)
        {
            i++;
        }
        cout<<v[i-1]+1<<endl;
    }

    return 0;
}

int a[10];
            for (int j = 0; j < 10; j++)
                a[j] = pow(2, j)-1;

            for (int j = 0; j < 10; j++)
            {
                if (a[j] >n)
                {
                    int r = j - 1;
                    cout << pow(2, r) << endl;
                    break;
                }
                else
                continue;
            }