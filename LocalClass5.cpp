/*
5) Local classes can access global types, variables, and functions. 
Also, local classes can access other local classes of the same function.
*/

#include <iostream>
using namespace std;

int x;

void fun()
{
	class Test1{
		public :
			Test1()
			{
				cout << "Test1 constructor" << endl;
			}
	};

	class Test2{
		Test1 t1;
		public :
			void Method()
			{
				cout << "x = " << x << endl;
			}
	};

	Test2 t2;
	t2.Method();
}