#include <stdio.h>

int main()
{
    unsigned char j, a=1;
    scanf("%hhu", &j);

    while (!j)
    {
        printf("j>1 : ");
        scanf("%hhu", &j);
    }
    

    for(; a<j+1; a++)
    {
        printf("%hhu\n", a);
    }
}