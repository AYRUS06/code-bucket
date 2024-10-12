#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;int f=0;
        if (k == 1 || k == 2)
           { cout << "1" << endl;continue;}
        else if(k%2==0)
        { int l=0;int c=1;
            for(int j=k/2;j>0;j=j/2)
            {
              l=l+j;
              if(j%2!=0)
              {
                  cout<<c<<endl;
                  break;
              }
              c++;
            }
        }
        else 
        cout << "0" << endl;
    }

    return 0;
}