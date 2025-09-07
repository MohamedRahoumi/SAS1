#include <stdio.h>

int main() {
    int age, anneesCotisation;
    float montant, bonus = 0;


    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez le nombre d'annees de cotisation : ");
    scanf("%d", &anneesCotisation);

    printf("Entrez le montant total epargne (en euros) : ");
    scanf("%f", &montant);

    if (montant > 50000) {
        bonus = ((int)(montant - 50000) / 10000) * 0.05 * montant;
    }

    if (age >= 65 && anneesCotisation >= 30 && montant >= 100000) {
        printf("Plan complet avec pension elevee\n");
    } else if (age >= 65 && anneesCotisation >= 20 && montant >= 50000) {
        printf("Plan partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Plan epargne non encore disponible\n");
    } else {
        printf("Conditions non suffisantes pour un plan de retraite\n");
    }

    if (bonus > 0) {
        printf("Bonus sur le montant epargne : %.2f euros\n", bonus);
    }

    return 0;
}
