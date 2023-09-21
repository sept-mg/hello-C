#include <stdio.h>

int main() {
    int initial, result = 0;
    scanf("%d", &initial);

    while (initial)
    {
        result *= 10;
        result += initial%10;
        initial = initial/10;
    }
    
    printf("le mirroir est : %d\n", result);

    return 0;
}