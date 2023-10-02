#include <stdio.h>

int calculerUn(int u0, int n)
{
    while (n > 0)
    {
        if (u0 % 2 == 0)
        {
            u0 /= 2;
        }
        
        else
        {
            u0 = 3 * u0 + 1;
        }
        n--;
    }
    return u0;
}

int main()
{
    int u0, n;
    printf("Entrez la valeur de u0 : ");
    scanf("%d", &u0);
    printf("Entrez l'indice n : ");
    scanf("%d", &n);

    int un = calculerUn(u0, n);
    printf("La valeur de u%d est : %d\n", n, un);

    return 0;
}