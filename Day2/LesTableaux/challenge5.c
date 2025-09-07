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

    int min = T[0];


    for (int i = 1; i < n; i++) {
        if (T[i] > min) {
            min = T[i];
        }
    }
    printf("\nLe plus petit element est : %d\n", min);

    return 0;
}
