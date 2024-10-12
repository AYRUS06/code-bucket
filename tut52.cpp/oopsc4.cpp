#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void getvalue()
    {
        cout << "enter the value of real and imaginary part of complex number : ";
        cin >> a >> b;
    }
    Complex operator+(Complex c)
    {
        Complex t;
        t.a = a + c.a;
        t.b = b + c.b;
        return t;
    }
    Complex operator-(Complex c)
    {
        Complex t;
        t.a = a - c.a;
        t.b = b - c.b;
        return t;
    }
    void display()
    {
        cout << "Value of complex number  is : " << a << " + i" << b << endl;
    }
};
int main()
{
    Complex ob, ob1, r1, r2;
    ob.getvalue();
    ob1.getvalue();
    ob.display();
    ob1.display();
    r1 = ob + ob1;
    r2 = ob1 - ob;

    r1.display();
    r2.display();

    return 0;
}