#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c, mg;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);

    mg = pow((a * b * c), 1.0 / 3.0);

    printf("La moyenne geometrique est : %.2f\n", mg);

    return 0;
}
