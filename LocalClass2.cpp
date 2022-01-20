/*
1) A local class type name can only be used in the enclosing function.

For example, in the following program, 
declarations of t and tp are valid in fun(), but invalid in main(). 
*/
// A program without any compilation error to demonstrate
// that a local class type name can only be used
// in the enclosing function

#include <iostream>
using namespace std;

void fun()
{
	// Local class
	class Test {
		// Body
	};

	Test t; // Fine
	Test* tp; // Fine
}

int main()
{
	//Test t; // Error
	//Test* tp; // Error
	return 0;
}
