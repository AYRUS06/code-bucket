#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class in_de
{
    int a;

public:
    in_de(int i = 0)
    {
        a = i;
    }
    in_de operator++()
    {
        in_de t;
        t.a = ++a;
        return t;
    }
    in_de operator++(int)
    {
        in_de t;
        t.a = ++a;
        return t;
    }
    in_de operator--()
    {
        in_de t;
        t.a = --a;
        return t;
    }
    in_de operator--(int)
    {
        in_de t;
        t.a = --a;
        return t;
    }
    void display()
    {
        cout << "a = " << a << endl;
    }
};
int main()
{
    in_de ob1(7);
    cout << "original value a is : ";
    ob1.display();

    in_de ob2=++ob1;
    cout<<"value of a after prefix increment is : ";
    ob2.display();

    in_de ob3=ob2++;
    cout<<"value of a after postfix increment is : ";
    ob3.display();

    in_de ob4 = --ob1;
    cout << "value of a after prefix decrement is : ";
    ob4.display();

    in_de ob5 = ob4--;
    cout << "value of a after postfix decrement is : ";
    ob5.display();
    return 0;
}