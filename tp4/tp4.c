#include <assert.h>
#include <stdio.h>

float carre(float f) {
    float c = f * f;
    return c;
}

float aire(float r) {
    assert(r >= 0.);
    const float PI = 3.1416f;
    float a = PI * carre(r);
    return a;
}

void affiche(float r) {
    printf("un cercle ayant un rayon de %.2fcm", r);
    float a = aire(r);
    printf(" occupe une surface de %.2fcm^2\n", a);
}

int main() {
    float rayons[] = { 1.5, 3., 10. };
    int nb = sizeof(rayons) / sizeof(float);
    for (int i = 0; i < nb; ++i)
        affiche(rayons[i]);
}