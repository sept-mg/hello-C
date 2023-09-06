#include <stdio.h>

int main(void)
{
    /*
        operateur :
        + : addition
        - : soustraction
        * : multiplication
        / : division
        % : modulo
    */

    int calcule = 1 + 2 * 3;
    int a = 1;
    int b = 4;

    printf("1 + 2 * 3 = %d\n", calcule);
    
    printf("1 + 4 = %d\n", 1 + 4);
    
    b = 2;
    a = a + b;

    b += 2;

    b--;
    --b;
    // a évité (existe avec ++)

    printf("a + b = %d\n", a + b);

    return 0;
}