#include <stdio.h>

    int factorielle(int n) {
    int resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    printf("La factorielle est : %d", factorielle(n));
    
    return 0;
}
