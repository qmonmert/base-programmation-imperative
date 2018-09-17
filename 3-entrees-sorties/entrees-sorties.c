#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char c;
    int k;
    float f;
    double d;

    printf("Bonjour\n");
    
    printf("Entrez un char : ");
    scanf("%c", &c);

    printf("Entrez un int : ");
    scanf("%d", &k);

    printf("Entrez un float : ");
    scanf("%f", &f);

    printf("Entrez un double : ");
    scanf("%lf", &d);

    printf("La valeur du char c est %c\n", c);
    printf("La valeur de l'int est %d\n", k);
    printf("La valeur du float est %f\n", f);
    printf("La valeur du double est %lf\n", d);

    return EXIT_SUCCESS;
}
