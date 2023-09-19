#include <stdio.h>

int main()
{
    unsigned char j;
    scanf("%hhu", &j);

    if(j>7 || j<1)
    {
        if(j==7) printf("congé");
        else if(j==6) printf("d'astreinte");
        else printf("présent");
    }

    else
    {
        printf("jour erreur : %hhu\n", j);
    }
    return 0;
}