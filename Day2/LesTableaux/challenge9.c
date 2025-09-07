#include <stdio.h>

int main() {
    int n;

    printf("Entrez la taille : ");
    scanf("%d", &n);

    int t[n];

    printf("Entrez les %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &t[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        int tmp = t[i];
        t[i] = t[n-1-i];
        t[n-1-i] = tmp;
    }


    printf("\nTableau inverse :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    printf("\n");

    return 0;
}
