#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    printf("Entrez le premier entier : ");
    scanf("%d", &x);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &y);

    printf("La produit est : %d",produit(x, y));

    return 0;
}
