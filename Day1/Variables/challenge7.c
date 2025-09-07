#include <stdio.h>

int main() {
    float a, b, c, moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);

    moyenne = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf("La moyenne des trois nombres est : %.2f\n", moyenne);

    return 0;
}
