#include <stdio.h>

int main() {
    float revenu, revenuImposable, impot;
    int statut;

    
    printf("Entrez le revenu annuel : ");
    scanf("%f", &revenu);

    printf("Entrez le statut fiscal (1=Celibataire, 2=Marié, 3=Chef de famille) : ");
    scanf("%d", &statut);


    if (statut == 1)
        revenuImposable = revenu - 1000;
    else if (statut == 2)
        revenuImposable = revenu - 2000;
    else
        revenuImposable = revenu - 3000;


    if (revenuImposable <= 20000)
        impot = revenuImposable * 0.05;
    else if (revenuImposable <= 50000)
        impot = revenuImposable * 0.10;
    else
        impot = revenuImposable * 0.20;

    printf("L'impot a payer est : %.2f euros\n", impot);

    return 0;
}
