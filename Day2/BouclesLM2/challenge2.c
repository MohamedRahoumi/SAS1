#include <stdio.h>

int main() {
    int lignes;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);

    for (int i = 1; i <= lignes; i++) {

        for (int j = 1; j <= lignes - i; j++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
