#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(int a)
{
    string t = to_string(a);
    int l = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == '1')
            l++;
        else
            continue;
    }
    if (l % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v;
        int j = 3;
        while (n > 0)
        {
            if (check(j) == 1)
            {
                v.push_back(j);
                n--;
            }
        }
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
        return 0;
    
}