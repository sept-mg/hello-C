#include <stdio.h>

int main() {
    unsigned int n; unsigned int res = 1;
    scanf("%u", &n);
    printf("%u! = ", n);
    for (; n > 1 ; n--)
    {
        res *= n;
    }

    printf("%u\n", res);
        
    return 0;
}