#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int k = 12;
    printf("La valeur de l'entier k sur 5 digits est %5d\n", k);

    double d = 12.345678;
    printf("La valeur du double d avec deux chiffres après la virgule est %.2lf\n", d);
    printf("La valeur du double d avec deux chiffres après la virgule et affiché sur 6 caractères est %6.2lf\n", d);

    return EXIT_SUCCESS;
}
