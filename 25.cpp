#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i, t; i++)
    {
        int n;
        cin >> n;
        int r = n;

        int s = 1;
        if (r % 25 == 0)
            cout << "0" << endl;
        else
        {
            int k = r / 10;
            while (r % 25 != 0)
            {   
                if (r % 10 == 5)
                {

                    
                    
                        while(k % 10 != 7 || k % 10 != 2)
                        {
                            k = k / 10;
                            r = k;
                            s++;
                        }
                    
                }
                else if (r % 10 == 0)
                {

                
                    
                        while (k % 10 != 0 || k % 10 != 5)
                        {
                            k = k / 10;
                            r = k;
                            s++;
                        }
                    
                }
                else
                {
                    r = r / 10;
                    s++;
                }
                cout << s << endl;
            }
        }
    }
    return 0;
}