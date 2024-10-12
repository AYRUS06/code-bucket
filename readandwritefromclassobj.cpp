#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
   string Name;
   int Employee_ID;
   int Salary;
};
int main(){
   Employee Emp_1;
   Emp_1.Name="Naveen";
   Emp_1.Employee_ID=0321;
   Emp_1.Salary=94;
 
   ofstream file1;
   file1.open("Employee.txt", ios::app);
   file1.write((char*)&Emp_1,sizeof(Emp_1));
   file1.close();
   
   ifstream file2;
   file2.open("Employee.txt",ios::in);
   file2.seekg(0);
   file2.read((char*)&Emp_1,sizeof(Emp_1));
   cout<<"\nName :"<<Emp_1.Name;
   cout<<"\nEmployee ID :"<<Emp_1.Employee_ID;
   cout<<"\nSalary :"<<Emp_1.Salary;
   file2.close();
   return 0;
}