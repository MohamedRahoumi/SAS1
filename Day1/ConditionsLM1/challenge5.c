#include <stdio.h>

int main() {
    int annee, choix;

    printf("Entrez l'annee: ");
    scanf("%d", &annee);

    do {
        printf("\n--- Menu ---\n");
        printf("1. en Mois\n");
        printf("2. en Jours\n");
        printf("3. en Heures\n");
        printf("4. en Minutes\n");
        printf("5. en Secondes\n");
        printf("6. Quitter\n");
        printf("Choisissez une option (1-6): ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Il y a %d mois \n", annee * 12);
                break;
            case 2:
                printf("Il y a %d jours .\n", annee * 365);
                break;
            case 3:
                printf("Il y a %d heures .\n", annee * 365 * 24);
                break;
            case 4:
                printf("Il y a %d minutes .\n", annee * 365 * 24 * 60);
                break;
            case 5:
                printf("Il y a %d secondes .\n", annee * 365 * 24 * 60 * 60);
                break;
            case 6:
                printf("Au revoir \n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 6);

    return 0;
}
