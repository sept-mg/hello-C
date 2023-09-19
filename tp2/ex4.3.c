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
    

    do
    {
        printf("%hhu\n", a);
        a++;
    } while (a<j+1);
}