#include <stdio.h>

int calculerUn(int u0, int n)
{
    if (n == 0)
    {
        return u0;
    }
    
    else if (u0 % 2 == 0)
    {
        return calculerUn(u0 / 2, n - 1);
    }
    
    else
    {
        return calculerUn(3 * u0 + 1, n - 1);
    }
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
