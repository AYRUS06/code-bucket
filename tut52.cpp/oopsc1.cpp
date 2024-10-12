#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class inti{
int a,b,c;
public :
inti();
void get(int a, int b, int c);
void display();
};

inti :: inti()
{
    a=1;b=1;c=1;

}

void inti :: get(int a, int b,int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

void inti ::display()
{
    cout<<"value of a is : "<<a<<endl;
    
    cout<<"value of b is : "<<b<<endl;
    
    cout<<"value of c is : "<<c<<endl;
 }
int main()
{
inti ob= inti();
ob.get(10,30,54);
ob.display();
return 0;
}
