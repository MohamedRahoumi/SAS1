#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Entrez  n de la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Le terme doit etre un entier non negatif.\n");
    } else {
        int res = fibonacci(n);
        printf("Le  Fibonacci est : %d\n", res);
    }

    return 0;
}
