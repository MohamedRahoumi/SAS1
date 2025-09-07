#include <stdio.h>
#include <math.h>   

int main() {
    float a,b,c,delta,x1,x2;

    printf("Entrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    printf("Entrez c : ");
    scanf("%f", &c);

    if (a == 0) {
        printf("n'est pas une equation du deuxieme degre.\n");
        return 0;
    }

    delta = b*b - 4*a*c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Deux solutions : x1 = %.2f , x2 = %.2f\n", x1, x2);
    }

    else if (delta == 0) {
        x1 = -b / (2*a);
        printf("solution : x = %.2f\n", x1);
    }
    else {
        printf("Pas de solution reelle (delta < 0).\n");
    }

    return 0;
}
