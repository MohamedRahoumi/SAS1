#include <stdio.h>

int estPair(int n) {
    return n % 2 == 0;
}

int main() {
    int nombre;
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    if (estPair(nombre)) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }

    return 0;
}
