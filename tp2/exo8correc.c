#include <stdio.h>

int main()
{
    unsigned int initial, square, squarecopy = 0, result, size = 1;
    scanf("%u", &initial);
    square = initial * initial;
    printf("%u\n", square);


    while(square && result!=initial)
    {
        squarecopy += (square % 10) * size;
        square = square/10;
        size*=10;

        result = square + squarecopy;

        printf("a : %u, b : %u, res : %u\n", square, squarecopy, result);
    }

    printf((square) ? "%u est bien un nombre de Kaprekar\n": "%u n'est pas un nombre de Kaprekar\n", initial);
    return 0;
}