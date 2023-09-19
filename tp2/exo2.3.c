#include <stdio.h>

int main()
{   
    unsigned char j;
    scanf("%hhu", &j);
    printf(j>7 ? "erreur jour non conforme" : (j==7 ? "congé": (j==6 ? "d'astreinte": "présent")));
    printf("\n");
    return 0;
}