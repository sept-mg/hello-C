#include <stdio.h>

int main(void)
{
    /*
        operateur de comparaison :
        == : égal
        != : non égal
        > : plus grand
        < : plus petit
        >= : plus grand ou égal
        <= : plus petit ou égal
    */
    int nombre = 1;

    if(nombre == 0) // if (1) c'est comme if(true)
    {
        printf("égale a 0\n");
    }
    else
    {
        printf("pas égale a 0\n");
    }

    return 0;
}