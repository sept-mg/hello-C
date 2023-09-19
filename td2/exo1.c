#include <stdio.h>

int main()
{
    unsigned int m; unsigned int a; unsigned int res;

    printf("entrer le nb mois : ");
    scanf("%d", &m);
    while (m>12 || m<1)
    {
        printf("valeur entre 1 et 12 : ");
        scanf("%d", &m);
    }
    
    printf("entrer annee : ");
    scanf("%d", &a);

    if(m < 8) {
        if(m==2) {
            if((a%4 == 0 && a%100 != 0) || (a%400 == 0)) {
                res = 29;
            } else {
                res = 28;
            }

        } else {
            if (m%2) {
                res = 31;
            } else {
                res = 30;
            }
        }

    } else {
        if (m%2) {
                res = 30;
            } else {
                res = 31;
            }
    }
    printf("il y a %d jours \n", res);
    return 0;
}