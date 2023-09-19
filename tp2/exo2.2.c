#include <stdio.h>

int main()
{
    unsigned char j;
    scanf("%hhu", &j);

    switch (j)
    {
        case 7:
            printf("congé");
            break;
        
        case 6:
            printf("d'astreinte");
            break;
        
        case 5 :
        case 4 :
        case 3 :
        case 2 :
        case 1 :
            printf("présent");
            break;
        default:
            printf("jour erreur : %hhu\n", j);
            break;
    }
    printf("\n");
    return 0;
}