/*
3) A Local class cannot contain static data members. It may contain static functions though
4) Member methods of the local class can only access static and enum variables of the enclosing function. 
Non-static variables of the enclosing function are not accessible inside local classes
*/
#include <iostream>
using namespace std;

void fun()
{
	static int x;
	enum {i = 1, j =2};
	int y = 10;

	class Test{
		public :
			void Method()
			{
				cout << "x = " << x << endl;
				cout << "i = " << i << endl;
				//cout << "Y = " << y << endl; Error
			}

	};
}