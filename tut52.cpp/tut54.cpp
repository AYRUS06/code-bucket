#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class college
{
public:
    string h_name;

  virtual  void display()
    {
        cout << "name of hostel is :" << h_name << endl;
    }
};
class hostel : public college
{public:
    int r_no, roll_no;
    string s_name, p_name;


    void display()
    {
        cout << "name of student is :" << s_name << endl;
        cout << "roll no of student is :" << roll_no << endl;
        cout << "name of student  hostel is :" << h_name << endl;
        cout << "room no is :" << r_no << endl;
        cout << "name of room partner is :" << p_name << endl;
    }
};
int main()
{ college *ptr ;
  college s;
  ptr=&s;
  ptr->h_name="NEW BHASOLI";
  ptr->display();
  hostel b;
  hostel *ptr1=&b;
  ptr1->s_name="SURYA"; ptr1->h_name="NEW BHASOLI";
  ptr1->roll_no=94;
  ptr1->r_no=402;
  ptr1->p_name="YASH";
  ptr=&b;
 ptr1->display();
 ptr->display();
    return 0;
}