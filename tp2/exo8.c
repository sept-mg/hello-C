#include <stdio.h>

int main()
{
    unsigned int initial, size = 0, square, squareCopy, decal = 1;
    scanf("%u", &initial);
    square = initial * initial;
    squareCopy = square;
    printf("square : %u\n", square);
    while(square)
    {
        square = square/10;
        size++;
    }

    size = size/2;
    printf("size : %u\n", size);



    for (; size; size--)
    {
        decal*=10;
        
    }

    square = squareCopy%decal;
    squareCopy = squareCopy/decal;
    

    printf("right : %u\n", square);

printf("left : %u\n", squareCopy);

    printf(((square + squareCopy) == initial) ? "%u est bien un nombre de Kaprekar\n": "%u n'est pas un nombre de Kaprekar\n", initial);
    return 0;
}