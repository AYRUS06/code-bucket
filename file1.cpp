#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
 cout<<"reading from the file"<<endl;   
string st;
ifstream in("this.txt");
in>>st;
getline(in,st);
cout<<st;
in.close();

cout<<"writing to the file"<<endl;
string st1;
st1="kim";
ofstream out("this.txt");
out<<st1;
out.close();
cout<<"reading from the file"<<endl;   
string st2;
ifstream n("this.txt");
n>>st2;
getline(n,st2);
cout<<st2;
n.close();
return 0;
}