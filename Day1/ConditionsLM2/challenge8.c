#include <stdio.h>

int main() {
    int age, historique;
    int plan; 
    char couvertureSupplementaire[50] = "";


    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez l'historique medical (0=aucun, 1=mineur, 2=majeur) : ");
    scanf("%d", &historique);

  
    if (age < 30 || (age >= 30 && historique == 0)) {
        plan = 1;  
    } else {
        plan = 2;  
    }

    
    if (historique == 2) {
        sprintf(couvertureSupplementaire, " + Couverture supplémentaire pour probleme majeur");
    }

    if (plan == 1)
        printf("Plan de sante : Base%s\n", couvertureSupplementaire);
    else
        printf("Plan de sante : Etendu%s\n", couvertureSupplementaire);

    return 0;
}
