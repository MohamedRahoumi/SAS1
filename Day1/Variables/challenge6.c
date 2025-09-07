#include <stdio.h>

int main() {
    float a, b;

    printf("Entrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Erreur \n");
    }

    return 0;
}
