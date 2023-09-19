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
    

    for(; j; j--)
    {
        printf("%hhu\n", j);
    }
}