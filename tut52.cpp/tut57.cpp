#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class cse{
    protected:
    string class_room_name;
    int no_of_students;
    public:
    cse(string a,int k)
    {class_room_name=a;no_of_students=k;}
    virtual void display()
    {

    }
};
class itl:public cse{
string t_name;
public:
itl(string a,int k,string t):cse(a,k)
{
    t_name=t;
}
void display()
{
    cout<<"class is of : ITL"<<endl;
    cout<<"course instructor is :"<<t_name<<endl;
    cout<<"room in which class take palce :"<<class_room_name<<endl;
    cout<<"number of students in class :"<<no_of_students<<endl;
}
};
class oops:public cse{
string t_name;
public:
oops(string a,int k,string t):cse(a,k)
{
    t_name=t;
}
void display()
{
    cout<<"class is of : OOPS"<<endl;
    cout<<"course instructor is :"<<t_name<<endl;
    cout<<"room in which class take palce :"<<class_room_name<<endl;
    cout<<"number of students in class :"<<no_of_students<<endl;
}
};
class coa:public cse{
string t_name;
public:
coa(string a,int k,string t):cse(a,k)
{
    t_name=t;
}
void display()
{
    cout<<"class is of : COA"<<endl;
    cout<<"course instructor is :"<<t_name<<endl;
    cout<<"room in which class take palce :"<<class_room_name<<endl;
    cout<<"number of students in class :"<<no_of_students<<endl;
}
};
int main()
{cse *ptr[3];
itl m("LT3",98,"MADHU MANGAL CHATURVEDI");
coa c("LT3",98,"AJAY KAUL");
oops o("LT3",98,"NAVEEN GONDHI");
 ptr[0]=&m;
 ptr[1]=&c;
 ptr[2]=&o;
  ptr[0]->display();
 ptr[1]->display();
 ptr[2]->display();

return 0;
}