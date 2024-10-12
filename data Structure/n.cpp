#include<iostream>
#include<bits/stdc++.h>
using namespace std;



iclass base

{ public:

base()

{ cout<<"BCon"; { cout<<"BDest";

} ~base()

}

}; class derived: public base {

public:

derived()

cout<<"DCon ";

{ }

~derived()

{ cout<<"DDest";

};

int main()

{ 
    derived object; return 0;
}