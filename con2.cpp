#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
int age,standard;string f_name,l_name;
public:
void get_age()
{
    cin>>age;
}
int  set_age()
{
    return age;
}
void getf_name()
{
    cin>>f_name;
}
string  setf_name()
{
    return f_name;
}
void getl_name()
{
    cin>>l_name;
}
string  setl_name()
{
    return l_name;
}
void get_std()
{
    cin>>standard;
}
int  set_age()
{
    return standard;
};
void to_string()
{
    cout<<to_string(get_age())<<endl<<
}
int main()
{student s;
 s.input();
 cout<<"Total Score of the student is :"<<s.claculate()<<endl;

return 0;
}