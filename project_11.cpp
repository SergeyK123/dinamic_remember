#include <iostream>
#include <string>
using namespace std;

string* foo(string *p) {
	
    p = new string("hello world");
	return p;
}

int main()
{ 
	string* p_hello = 0;

	p_hello = foo(p_hello);
	



	cout << *p_hello << endl;

	
	
}
