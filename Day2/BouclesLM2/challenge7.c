#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
