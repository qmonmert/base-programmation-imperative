#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int a = 3, b = 4;
    printf("%d\n", 1 < 2); // affiche 1
    printf("%d\n", a == 2); // affiche 0
    printf("%d\n", a <= b); // affiche 1
    printf("%d\n", a == 3 && b == 5); // affiche 0
    printf("%d\n", a == 3 || b == 5); // affiche 1
    return EXIT_SUCCESS;
}
