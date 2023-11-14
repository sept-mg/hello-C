#include <iostream>
#include <cstdio>
#include <climits>
#include <iomanip>
using namespace std;
int main() {
    cout << "Bool : - "<< false <<" .. " << true << endl;
    cout << "Char : "<<sizeof(char)<<" - Domaine " << CHAR_MIN << " .. " << CHAR_MAX << endl;
    cout << "Unsigned char : " << sizeof(unsigned char) << " - Domaine " << SCHAR_MIN << " .. " << SCHAR_MAX << endl;
    cout << "wchar_t : " << sizeof(wchar_t) << " - Domaine " << WCHAR_MIN << " .. " << WCHAR_MAX << endl;
    cout << "short : " << sizeof(short) << " - Domaine " << SHRT_MIN << " .. " << SHRT_MAX << endl;
    cout << "unsigned short : " << sizeof(unsigned short) << " - Domaine " "0 .. " " .. " << USHRT_MAX << endl;
    cout << "int : " << sizeof(int) << " - Domaine " << INT_MIN << " .. " << INT_MAX << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << " - Domaine " << CHAR_MIN << " .. " << CHAR_MAX << endl;
    cout << "long : " << sizeof(long) << " - Domaine " << LONG_MIN << " .. " << LONG_MAX << endl;
    cout << "unsigned long : " << sizeof(unsigned long) << " - Domaine " "0 .. " << ULONG_MAX << endl;
    cout << "float : " << sizeof(float) << endl;
    cout << "double : " << sizeof(double) << endl;
}     