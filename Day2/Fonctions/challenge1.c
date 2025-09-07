#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    printf("Entrez le premier entier : ");
    scanf("%d", &x);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &y);

    printf("La somme est : %d",somme(x, y));

    return 0;
}
