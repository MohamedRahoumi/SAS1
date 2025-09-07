#include <stdio.h>

int main() {
    int a, b;
    
    printf("Entrez la premiere valeur: ");
    scanf("%d", &a);
    
    printf("Entrez la deuxieme valeur: ");
    scanf("%d", &b);
    
    if (a == b) {
        printf("Le triple de leur somme est : %d\n", 3 * (a + b));
    } else {
        printf("La somme des deux valeurs est : %d\n", a + b);
    }
    
    return 0;
}
