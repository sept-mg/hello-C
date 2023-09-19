#include <stdio.h>

int main()
{
    unsigned int m; unsigned int a; unsigned int j; unsigned int res;



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
    


    printf("entrer le nb jours : ");
    scanf("%d", &j);
    while (m>res || m<1)
    {
        printf("valeur entre 1 et %d : ", res);
        scanf("%d", &j);
    }

    if(j==res) {
        j = 1;
        if(m==12) {
            m=1;
            a++;
       } else {
            m++;
       }

    } else {
        j++;
    }

    printf("demain nous seront le %d/%d/%d\n", j, m, a);
    return 0;
}