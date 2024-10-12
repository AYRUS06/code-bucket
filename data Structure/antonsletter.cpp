#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include <set>
using namespace std;

int main()
{
	string s;
	set<char> t;
	while (cin>>s)
	{
		if (s[0]!='{') 
		{
			t.insert(s[0]);
		}
		else if (s[1]!='}')
		{
			t.insert(s[1]);
		}
	}
	cout<<t.size()<<endl;
	return 0;
}