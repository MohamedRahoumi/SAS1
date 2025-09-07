#include <stdio.h>

int main() {
    float consommation, tarif, facture;
    int typeUtilisateur, typeContrat;

    // Saisie des informations
    printf("Entrez la consommation en kWh : ");
    scanf("%f", &consommation);

    printf("Entrez le type d'utilisateur : ");
    scanf("%d", &typeUtilisateur);

    printf("Entrez le type de contrat : ");
    scanf("%d", &typeContrat);

    if (typeUtilisateur == 1) {       
        if (typeContrat == 0)
            tarif = 0.20;
        else
            tarif = 0.15;
    } else {                           
        if (typeContrat == 0)
            tarif = 0.30;
        else
            tarif = 0.25;
    }


    facture = consommation * tarif;

    if (consommation > 500) {
        facture *= 1.10;  
    }

    printf("La facture d'electricite est : %.2f euros\n", facture);

    return 0;
}
