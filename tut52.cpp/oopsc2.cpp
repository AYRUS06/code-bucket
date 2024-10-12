#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dynamic
{
    int *c;

public:
    dynamic()
    {
        c = new int;
        *c = 0;
    }
    dynamic(int x)
    {
        c = new int;
        *c = x;
    }
    void display()
    {
        cout << "value of c is : " << *c << endl;
    }
};
int main()
{
    dynamic ok = dynamic();
    ok.display();
    dynamic ik=dynamic(3);
    ik.display();

    return 0;
}