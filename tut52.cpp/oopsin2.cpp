#include<iostream>
using namespace std;
class A
{
    int a;

public:
    void get_a(int x)
    {
        a=x;
    }

    void display()
    {
        cout<<"a:"<<a<<endl;
    }
};
class B:private A          
{
    int b;

public:
    void get_b(int x)
    {
        b=x;
    }

    void display()
    {
        cout<<"b:"<<b<<endl;
    }
};
class C:private B
{
    int c;

public:
    void get_c(int x)
    {
        c=x;
    }

    void display()
    {
        cout<<"c:"<<c<<endl;
    }
};

int main()
{
    A x;
    B y;
    C z;

    x.get_a(2);
   
    // y.get_a(3);    this will throw error because y has no access to get_a method of class A
    y.get_b(5);

    z.get_c(10);

    x.display();
    y.display();
    z.display();
    return 0;
}