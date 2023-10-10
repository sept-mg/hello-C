#include <stdio.h>

int indexMax(const int t[], int nb)
{
    int m = 0;
        for(int i = 1; i < nb; ++i)
        {
            if(t[i] > t[m]) m = i;
        }
    return m;
}

void swap(int a[], int m, int nb)
{
    int temp = a[nb - 1];
    a[nb - 1] = a[m];
    a[m] = temp;
}

void sort(int t[], int nb)
{
    int m;
    for (; nb > 1; nb--)
    {
        m = indexMax(t, nb);
        swap(t, m, nb);
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