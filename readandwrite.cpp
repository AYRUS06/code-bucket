#include <iostream>
#include <fstream>
using namespace std;

int main()

{
	fstream ob;

	ob.open("test.txt", ios::out);	

	ob << "this is my pgm\n";	

	ob << "to read and write in file";

	ob.close();	

	ob.open("test.txt", ios:: in);	

	while (!ob.eof())

	{
		string str;

		ob >> str;

		cout << str << endl;	

	}

	ob.close();

	return 0;

}