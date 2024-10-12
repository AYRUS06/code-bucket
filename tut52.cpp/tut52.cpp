#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class students
{
    int roll_no;
    string name;
    string branch;
    int marks[3];

public:
    void getdata(int r, string n, string b, int a[])
    {
        roll_no = r;
        name = n;
        branch = b;
        for (int i = 0; i, 3; i++)
            marks[i] = a[i];
    }
    void display()
    {
        cout << "roll number of student is :" << roll_no << endl;
        cout << "name of student is :" << name << endl;
        cout << "branch of student is :" << branch << endl;
        cout << "average marks obtained by student are :" << (marks[0] + marks[1] + marks[2]) / 3 << endl;
    }
};
int main()
{
    students *ptr = new students[3];
    students *temp = ptr;
    int e;
    string m, q;
    int c[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "enter roll number, enter name , enter branch, enter marks in subjects " << endl;
       
        cin >> e >> m >> q;
        
        for (int j = 0; j < 3; j++)
            cin>> c[j];
        ptr->getdata(e, m, q, c);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        temp->display();
        temp++;
    }
    return 0;
}