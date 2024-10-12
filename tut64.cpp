#include <iostream>
#include <bits/stdc++.h>
using namespace std;


template <class T1,class T2,class T3,class T4>
class c1
{
public:
    T1 a;T2 k;T3 l; T4 m;
    c1(T1 e,T2 f,T3 g,T4 h)
    {
        a=e;k=f;l=g;m= h;
    }
    T4 product()
    {
        return (a+" "+k+l+" "+m);
    }
};

int main()
{
    
    c1<string,char,char,string> ob("surya",'i','s',"good");
    cout<<"product is : "<<ob.product()<<endl;
    return 0;
}