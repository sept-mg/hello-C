#include <stdio.h>

int indexMax(int t[], int nb)
{
    int m = 0;
        for(int i = 1; i < nb; ++i)
        {
            if(t[i] > t[m]) m = i;
        }
    return m;
}

void sort(int t[], int nb)
{
    int m = 0;
    for (; nb > 1; nb--)
    {
        m = indexMax(t, nb);
        int temp = t[nb - 1];
        t[nb - 1] = t[m];
        t[m] = temp;
    }
    
}

int main()
{
    int tab[5] = {1, 22, 15, 55, 9};
    int taille = sizeof(tab)/sizeof(int);
    sort(tab, taille);
    printf("{");
    for (int i = 0; i < taille; i++)
    {
        printf(" %d,", tab[i]);
    }
    printf(" }\n");
    
    return 0;
}