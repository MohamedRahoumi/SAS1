#include <stdio.h>

int main() {

    float revenu;
    int score, duree;

    printf("Entrez votre revenu  : ");
    scanf("%f", &revenu);

    printf("Entrez votre score : ");
    scanf("%d", &score);

    printf("Entrez la duree ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Eligible pour le pret.\n");
    }
    else if (revenu >= 30000 && score >= 650 && duree<= 15) {
        printf("Eligible pour le pret avec conditions.\n");
    }
    else {
        printf("Non eligible pour le pret.\n");
    }

    return 0;
}
