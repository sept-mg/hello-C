#include <stdio.h>

//exo 6
int main(void)
{
    float x; float y; float conv;

    printf("entrer la valeur en dollars : ");
    scanf("%f", &x);

    printf("\nentrer le taux de conversion : ");
    scanf("%f", &conv);

    y = x/conv;
    printf("%.2f dollars = ", x);
    printf("%.2f euros\n", y);

    return 0;
}