#include <stdio.h>

int main() {
    int n;
    int factorielle = 1;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorielle *= i;
    }

    printf(" la factorille de %d = %d\n", n, factorielle);

    return 0;
}
