#include <stdio.h>

int main() {
    int n;

    printf("Entrez la taille : ");
    scanf("%d", &n);

    int t1[n], t2[n];

    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &t1[i]);
    }


    for (int i = 0; i < n; i++) {
        t2[i] = t1[i];
    }

    printf("\nTableau t1 :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", t1[i]);
    }

    printf("\n\nTableau t2 :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", t2[i]);
    }


    return 0;
}
