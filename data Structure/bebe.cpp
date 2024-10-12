#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int p;
    100;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    if (v.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}