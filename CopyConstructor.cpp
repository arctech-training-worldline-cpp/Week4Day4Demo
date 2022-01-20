#include <iostream>
using namespace std;

class Point
{
	int x, y;
	public : 
		Point(int xVal, int yVal);
		//copy constructor
		Point(const Point &p1);
		void display();
		void setXY();
};

Point :: Point(int xVal, int yVal)
{
	x = xVal;
	y = yVal;
}

Point :: Point(const Point &p1)
{
	x = p1.x;
	y = p1.y;
}

void Point :: display()
{
	cout << " X : " << x << " Y : " << y << endl;
}

void Point :: setXY()
{
	x = 30;
	y = 40;
}

int main()
{
	Point p1(10,15); //parameterized constructor called
	Point p2 = p1; //copy constructor will be called
	
	p1.display();
	p2.display();

	p1.setXY();

	p1.display();
	p2.display();
	return 0;
}


