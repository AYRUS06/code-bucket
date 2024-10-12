#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class memory{
string f_name;
int ad;
public :
memory(){cout<<"constructor is called"<<endl;}
memory(string f,int a)
{
 f_name=f;ad=a;
}
void display()
{
    cout<<"name of file is : "<<f_name<<endl;
    cout<<"address of file is : "<<ad<<endl;
}
void* operator new(size_t size)
{
    cout<<"overloading new oprerator with size : "<<size<<endl;
    void * p=::operator new(size);
    return p;
}
void operator delete(void *p)
{
    cout<<"overloading delete operator "<<endl;
    free(p);
}
};
int main()
{
    memory *p=new memory("memory management",234);
    p->display();

    delete p;

return 0;
}