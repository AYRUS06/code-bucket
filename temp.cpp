#include<iostream>

#include<stdexcept>

using namespace std;

 

void test() 

{

    long MEMORY_SIZE = 0x7fffffff;

    int *ptr = new int[MEMORY_SIZE];

}

int main()

{

    try{

        test();

    }

    catch(int e)

    {

        cout<<e<<endl;

    }

    catch(char c)

    {

        cout<<c<<endl;

    }

    catch(const bad_alloc &e)

    {

        cout<<"Not enough memory";

    }

    catch(exception &e){

        cout<<e.what();

    }
    cout<<"Not enough memory";

    return 0;

}