#include <stdlib.h>
#include <stdio.h>

int puissance(int v, int p) {
int j, resultat;
    resultat = 1; j = 1;
    while (j <= p) {
        resultat = resultat * v;
        ++j;
    }
    return resultat;
}

int main(void) {
    int k, p, r;
    printf("Entrez une valeur entiere : ");
    scanf("%d", &k);
    printf("Entrez une puissance entiere positive : ");
    scanf("%d", &p);
    r = puissance(k, p);
    printf("%d a la puissance %d vaut %d\n", k, p, r);
    return EXIT_SUCCESS;
}
