#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'u', 'v', 'r', 's', 't', 'w', 'x', 'y', 'z'};
    string b = "";
    int i = 0;
    int r = 0;
    while (n > 0 && i < 26)
    {
        if (i != 25 && r != k)
        {
            b = b + a[i];
            r++;i++;n--;
        }
        else if(i==25&&r!=k)
        {
            b=b+a[i];
            k++;
            i=0;n--;
        }
        else if(r==k&&n>0)
        {
          r=0;
          i=0;
        }
       
    } 
    cout<<b<<endl;
    return 0;
}