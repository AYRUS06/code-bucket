#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class cse{
    int entry_no;
    string name;
    public:
    void getdata(int entry_no,string name)
    {
        this->entry_no=entry_no;
        this->name=name;
    }
    void display()
    {
        cout<<"entry no."<<entry_no<<endl;
        cout<<"name of student "<<name<<endl;
    }
};

int main()
{
cse entry_no;
entry_no.getdata(94,"surya");
entry_no.display();
return 0;
}