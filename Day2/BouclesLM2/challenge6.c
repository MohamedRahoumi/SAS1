#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("La factorielle est %d\n",fact);

    return 0;
}
