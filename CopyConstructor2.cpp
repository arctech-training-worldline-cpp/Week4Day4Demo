#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        char *str;
        int size;
    public:
        String(const char *valStr);
        ~String() { delete [] str;}
        String(const String &);
        void print();
        void change(const char *);
};

String :: String(const char *valStr)
{
    size = strlen(valStr);
    str = new char[size + 1];
    strcpy(str, valStr);
}

String :: String(const String &old_str)
{
    size = old_str.size;
    str = new char[size + 1];
    strcpy(str, old_str.str);
}

void String :: change(const char *ValStr)
{
    delete [] str;
    size = strlen(ValStr);
    str = new char[size + 1];
    strcpy(str, ValStr);
}

void String :: print()
{
    cout << str << endl;
}
int main()
{
    String str1("Test1");
    String str2 = str1;

    str1.print();
    str2.print();

    str2.change("Test2");

    str1.print();
    str2.print();
    return 0;
}