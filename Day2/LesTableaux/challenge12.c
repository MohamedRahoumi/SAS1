#include <stdio.h>

int main() {
    int n;

    printf("Entrez la taille : ");
    scanf("%d", &n);

    int t[n];

    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t[i]);
    }

    printf("\nElements pairs du tableau :\n");
    for (int i = 0; i < n; i++) {
        if (t[i] % 2 == 0) {
            printf("%d ", t[i]);
        }
    }

    return 0;
}
