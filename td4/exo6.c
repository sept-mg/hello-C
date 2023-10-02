#include <stdio.h>

int calculerTempsDeVol(int u0)
{
    int tempsDeVol = 0;

    while (u0 != 1)
    {
        if (u0 % 2 == 0)
        {
            u0 /= 2;
        }

        else
        {
            u0 = 3 * u0 + 1;
        }
        tempsDeVol++;
    }

    return tempsDeVol;
}

int main()
{
    int u0;
    printf("Entrez la valeur de u0 : ");
    scanf("%d", &u0);

    int tempsDeVol = calculerTempsDeVol(u0);
    printf("Le temps de vol de u%d est : %d\n", u0, tempsDeVol);

    return 0;
}
