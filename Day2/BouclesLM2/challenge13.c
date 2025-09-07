#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Table de multiplication de %d :\n", n);

    for (int i = 1; i <= 10; i++) {
        int produit = n * i;
        printf("%d x %d = %d\n", n, i, produit);
        somme += produit;
    }

    printf("Somme des produits : %d\n", somme);

    return 0;
}
