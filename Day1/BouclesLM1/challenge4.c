#include <stdio.h>

int main() {
    int n, i, count = 1;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    for (i = 0; count <= n; i++) {
        if (i % 2 != 0) { 
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}
