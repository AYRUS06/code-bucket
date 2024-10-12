#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void race(int k)
{
    cout<<"normal wint he race bcoz of exactness of calling function :"<<endl;
}
template <class T1,class T2,class T3>
void race(T1 b,T2 c,T3 w)
{ T1 q=b;T2 d =c;T3 e =w;
  cout<<"template win the race"<<endl;
  cout<<"required operation is :"<<q*d*e<<endl;
}
int main()
{
race(1,3.4,6);
race(7);
return 0;
}