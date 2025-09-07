#include <stdio.h>

int main() {
    int nombre, somme = 0, compte = 0;

    printf("Entrez des nombres positifs :\n");

    do {
        scanf("%d", &nombre);
        if (nombre > 0) {
            somme += nombre;
            compte++;
        }
    } while (nombre != 0);

    if (compte > 0) {
        float moyenne = somme / compte;
        printf("La moyenne est : %.2f\n", moyenne);
    } else {
        printf("Aucun nombre positif entre.\n");
    }

    return 0;
}
