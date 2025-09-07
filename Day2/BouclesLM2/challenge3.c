#include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int estPremier = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                estPremier = 0;
                break;
            }
        }
        if (estPremier) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
