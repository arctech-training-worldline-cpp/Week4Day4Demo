#include <iostream>
using namespace std;

class string
{
    private:
        char *str;
        int length;
    public : 
        string(); //length = 0; str = new char[length + 1]
        string(char *val); // length = strlen(val);  str = new char[length + 1] ; strcpy(val, str);
        void concat(string s1, string s2);//find the total length; str = new char[total length] ;  copy the first arguemnt then the next argument into str
        void display();        
};

