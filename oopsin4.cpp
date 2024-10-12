#include <iostream>
using namespace std;

class A {
public:
	int a;
	A()
	{
		a = 10;
	}
};

class B : public virtual A {public :
int b=7;
};

class C : public virtual A {
    public :
    int c=9;
};

class D : public B, public C {
    public:
    int d =15;
};

int main()
{
	D object; 
	cout << "a = " << object.a << endl;
    cout << "b = " << object.b << endl;
    cout << "c = " << object.c << endl;
    cout << "d = " << object.d << endl;
    cout<<"sum of a , b ,c and d is : "<<object.a+object.b+object.c+object.d<<endl;
	return 0;
}
