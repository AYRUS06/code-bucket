#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class simplecalculator{
    int x,y;
    public:
    void simple(int a,int b){x=a;y=b;}
    void sicalculation()
    {
     cout<<"sum of two numbers is :"<<x+y<<endl;
     cout<<"difference of two numbers is :"<<x-y<<endl;
      cout<<"product of two numbers is :"<<x*y<<endl;
       cout<<"division of two numbers is :"<<x/y<<endl;
    }
};

class scientificcalculator{
      int x;
    public:
    void science(int a){x=a;}
    void sccalculation()
    {
     cout<<"sine of two numbers is :"<<sin(x)<<endl;
     cout<<"cosine of two numbers is :"<<cos(x)<<endl;
      cout<<"tan of two numbers is :"<<tan(x)<<endl;
       cout<<"exponent of two numbers is :"<<tanf(x)<<endl;
    }
};
class hybridcalculator : public simplecalculator,public scientificcalculator
{
 
}; 
int main()
{
hybridcalculator calc;
calc.simple(5,9);
calc.sicalculation();
calc.science(7);
calc.sccalculation();
return 0;
}