#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() {
    for (int nb = 33; nb <= CHAR_MAX; nb++) {
        cout << setiosflags(ios::right) << setw(3) << nb << "->'" << (char)nb << "'..";
        if ((nb - 32) % 8 == 0)
            cout << endl;

    }
}