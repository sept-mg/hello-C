#include <stdio.h>
# pragma warning ( disable : 4996 6031)

unsigned int calculerFactorielle(unsigned int n) {
    unsigned int fact = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    unsigned int n;
    printf("Entrez un entier naturel : ");
    scanf("%u", &n);

    unsigned int fact = calculerFactorielle(n);

    printf("La factorielle de %u est %u\n", n, fact);

    return 0;
}
