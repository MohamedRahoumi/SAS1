#include <stdio.h>

int main() {
    float n;

    printf("Entrez un nombre : ");
    scanf("%f", &n);

    if (n > 0) {
        printf("Le nombre est positif.\n");
    } 
    else if (n < 0) {
        printf("Le nombre est negatif.\n");
    } 
    else {
        printf("Le nombre est nul.\n");
    }
    return 0;
}
