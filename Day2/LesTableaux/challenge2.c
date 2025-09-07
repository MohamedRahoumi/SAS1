#include <stdio.h>

int main() {
    int n;

    printf("entrez la taille ");
    scanf("%d", &n);

    int t[n];

    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t[i]);
    }

    printf("\nLes elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", t[i]);
    }
    return 0;
}
