#include <iostream>
using namespace std;

class Test{
	int x;
	public: 
		Test()
		{
			cout << "Default constructor called" << endl;
			x= 0;
		}
		Test(const Test &t)
		{
			cout << "Copy constructor called " << endl;
		}		
};

void fun(Test t)
{
	//code
}

Test fun1(Test &t)
{
	return t;
}
int main()
{
	Test t1;
	Test t2;
	Test t3 = t1;//call copy constructor
	fun(t2);//call copy constructor as pass by value

	Test t4;
	Test t5 = fun1(t4); //call copy constructor as the value returned is an object of class Test
	return 0;
}