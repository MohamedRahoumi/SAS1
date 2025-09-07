#include <stdio.h>

int main() {
    int n;

    printf("Entrez la taille ");
    scanf("%d", &n);

    int T[n];


    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    int max = T[0];


    for (int i = 1; i < n; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }
    printf("\nLe plus grand element est : %d\n", max);

    return 0;
}
