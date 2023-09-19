#include <stdio.h>

int main()
{
    unsigned char j;
    scanf("%hhu", &j);

    while (!j)
    {
        printf("j>1 : ");
        scanf("%hhu", &j);
    }
    

    do
    {
        printf("%hhu\n", j);
        j--;
    } while (j);
}