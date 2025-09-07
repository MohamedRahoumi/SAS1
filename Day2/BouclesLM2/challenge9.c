#include <stdio.h>

int main() {
    int base, exposant;
    long resultat = 1;

    printf("Entrez la base (positive) : ");
    scanf("%d", &base);
    printf("Entrez l'exposant (non negatif) : ");
    scanf("%d", &exposant);

    int i = 0;
    while (i < exposant) {
        resultat *= base;
        i++;
    }

    printf("%d^%d = %ld\n", base, exposant, resultat);

    return 0;
}
