#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string r = "";
    for (int i = 0; i < n; i++)
    { int k= (int)s[i];
         k++;
        r = r + char(k);
    }
    r = r + s.substr(n);
    
    cout << r;
    return 0;
}