/*
2) All the methods of Local classes must be defined inside the class only.
*/
#include <iostream>
using namespace std;

void fun()
{
	// Local class
	class Test {

		public :
			void method()
			{
				cout << "local class method called" << endl;
			}
			//void method();
	};	

	Test t;
	t.method();
}

int main()
{
	return 0;
}