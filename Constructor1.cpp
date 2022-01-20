#include<iostream>
using namespace std;

class integer
{
    int m,n;
    public :
        integer(int , int);
        void display();
};

integer :: integer(int x, int y)
{
    m = x;
    n = y;
}

void integer :: display()
{
    cout << "M : " << m << endl;
    cout << "N : " << n << endl;
}

int main()
{
    integer obj1(10, 20); //implicit call
    integer obj2 = integer(30,40); //explicit call

    obj1.display();
    obj2.display();

    return 0;
}