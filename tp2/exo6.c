#include <stdio.h>

int main()
{
    unsigned int coef=0, curCoef; float note=0, curNote;

    printf("coef : ");
    scanf("%u", &curCoef);
    printf("note : ");
    scanf("%f", &curNote);

    while (curCoef)
    {
        note += curNote*curCoef;
        coef += curCoef;

        printf("coef : ");
        scanf("%u", &curCoef);
        if(curCoef)
        {
            printf("note : ");
            scanf("%f", &curNote);
        }
    }

    printf("la moyenne est %.2f\n", note/coef);
    return 0;
    
}