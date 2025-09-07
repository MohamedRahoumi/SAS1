#include <stdio.h>

int main() {
    int joursAccordes, joursUtilises, statut;
    int joursRestants;

    printf("Entrez le nombre de jours de congé accordes : ");
    scanf("%d", &joursAccordes);

    printf("Entrez le nombre de jours de congé utilises : ");
    scanf("%d", &joursUtilises);

    printf("Entrez le statut de l'employe (0=temps partiel, 1=temps plein) : ");
    scanf("%d", &statut);

    if (statut == 1) {  
        joursRestants = joursAccordes - joursUtilises;
    } else {           
        joursRestants = (joursAccordes / 2) - joursUtilises;
    }

    if (joursRestants < 0) {
        printf("Alerte : vous avez depasse le nombre de jours de congé!\n");
    } else {
        printf("Jours de congé restants : %d\n", joursRestants);
    }

    return 0;
}
