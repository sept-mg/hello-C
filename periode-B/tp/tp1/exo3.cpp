#include <iostream>
#include <climits>
#include <cstring>
#pragma warning(disable: 4996)
using namespace std;

unsigned int mirroir(unsigned int n)
{
    char t[256];

    sprintf(t, "%u", n);
    unsigned char len = strlen(t);

    char temp;
    for (unsigned char i = 0; i < (len - 1) / 2; i++)
    {
        temp = t[i];
        t[i] = t[len - i - 1];
        t[len - i - 1] = temp;
    }

    sscanf(t, "%u", &n);

    return n;
}

bool palindrome(unsigned int n)
{
    return n == mirroir(n);
}

unsigned int mirroirOpti(unsigned int n)
{
    unsigned char result = 0;
    while (n)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    
    return result;
}

bool palindromeOpti(unsigned int n)
{
    char t[256];
    unsigned int nb = n;
    unsigned char i = 0;
    while (nb)
    {
        t[i] = nb % 10;
        i++;
        nb /= 10;
    }

    // t[i] = '\0';

    i--;

    unsigned char j = 0;
    while (i >= j && t[i] == t[j])
    {
        i--;
        j++;
    }
    
    return !(i - i/2);
}

int main()
{

}