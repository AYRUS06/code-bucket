#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class shape
{
public:
    virtual void getdata()=0;
    virtual void display()=0;
};
class triangle : public shape
{
public:
    int h, b;
    void getdata()
    {
        cout << "enter the height and base of triangle : ";
        cin >> h >> b;
    }
    void display()
    {
        cout << "Area of triangle is : " << (b * (h/2)) << endl;
    }
};
class rectangle : public shape
{
public:
    int l, b;
    void getdata()
    {
        cout << "enter the length and braedth of rectangle : ";
        cin >> l >> b;
    }
    void display()
    {
        cout << "Area of reactangle is : " << l * b << endl;
    }
};
class circle : public shape
{
public:
    int r;
    void getdata()
    {
        cout << "enter the radius of circle : ";
        cin >> r;
    }
    void display()
    {
        cout << "area of circle with radius " << r << " is " << 3.145 * r * r << endl;
    }
};
int main()
{
    shape *s;
    triangle t;
    rectangle r;
    circle c;
    t.getdata();
    r.getdata();
    c.getdata();
    t.display();
    r.display();
    c.display();
    
    return 0;
}