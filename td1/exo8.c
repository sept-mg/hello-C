#include <stdio.h>

int main(void)
{
    int a; int b; int c;

    printf("entrer la valeur de a : ");
    scanf("%d", &a);

    printf("eentrer la valeur de b : ");
    scanf("%d", &b);

    printf("eentrer la valeur de c : ");
    scanf("%d", &c);

    if (c > a) a = c;

    printf("la plus grande valeur est %d\n", (a>b) ? (a) : (b));

    return 0;
}