#include <stdio.h>

int main() {
    int n, b, trouve = 0;

    printf("Entrez la taille : ");
    scanf("%d", &n);

    int t[n];

   
    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t[i]);
    }

    printf("\nEntrez l'element a rechercher : ");
    scanf("%d", &b);

    for (int i = 0; i < n; i++) {
        if (t[i] == b) {
            printf("Element %d trouve a la position %d.\n", b, i + 1);
            trouve = 1;
            break; 
        }
    }

    if (!trouve) {
        printf("Element %d non trouve dans le tableau.\n", b);
    }

    return 0;
}
