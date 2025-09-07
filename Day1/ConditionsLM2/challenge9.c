#include <stdio.h>

int main() {
    float salaireBase, salaireFinal, tauxHoraire, heuresSup;
    int poste;

    printf("Entrez le salaire de base : ");
    scanf("%f", &salaireBase);

    printf("Entrez le nombre d'heures supplementaires : ");
    scanf("%f", &heuresSup);

    printf("Entrez le type de poste (1=Junior, 2=Senior) : ");
    scanf("%d", &poste);

    
    tauxHoraire = salaireBase / 160; 

  
    salaireFinal = salaireBase + heuresSup * tauxHoraire * 1.5;


    if (poste == 1)
        salaireFinal += salaireBase * 0.10; 
    else
        salaireFinal += salaireBase * 0.20; 

    printf("Le salaire total est : %.2f euros\n", salaireFinal);

    return 0;
}
