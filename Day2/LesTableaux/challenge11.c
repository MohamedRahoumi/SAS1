#include <stdio.h>

int main() {
    int n, va, vn ;

    printf("Entrez la taille: ");
    scanf("%d", &n);

    int t[n];

    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t[i]);
    }
    printf("Valeur a remplacer : ");
    scanf("%d", &va);

    printf("Nouvelle valeur : ");
    scanf("%d", &vn);

    for (int i = 0; i < n; i++) {
        if (t[i] == va) {
            t[i] = vn;
        }
    }

    printf("\nTableau modifie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    return 0;
}
