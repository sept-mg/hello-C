#include <stdio.h>

int main(void)
{
    float nombre = 1.1;
    int entier = (int)nombre;

    /*
        %d: entier (int)
        %f: flottant (float)
        %c: caractère (char)
        %s: chaîne de caractères (char *)
    */

    printf("la partie entière de %.2f est %d\n", nombre, entier); // ca replace le %d par le dieuxieme paramettre et %.2f c'est 2 chiffre significatif

    const float PI = 3.14; //pi est en lecture seule et c'est écrit en MAJUSCULE

    register int i = 1; //i stocker "dans le registre" normalement en gros prioritaire
    volatile int j = 2; //j stocker "dans la ram" normalement en gros moins prioritaire
    // plus utilisé fais par le compilateur ajd.

    return 0;
}