#include <stdio.h>

int main() {
    float score;
    int anciennete, recompenses;
    float scoreFinal;

    printf("Entrez le score de performance (0-100) : ");
    scanf("%f", &score);

    printf("Entrez l'anciennete (en annees) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de recompenses (0,1,2) : ");
    scanf("%d", &recompenses);

    if (recompenses == 1) {
        scoreFinal = score * 1.10;  
    } else if (recompenses >= 2) {
        scoreFinal = score * 1.20;  
    } else {
        scoreFinal = score;    
    }

    if (scoreFinal >= 90 && anciennete >= 5) {
        printf("Evaluation : Excellente\n");
    } 
    else if (scoreFinal >= 75 && anciennete >= 3) {
        printf("Evaluation : Bonne\n");
    } 
    else if (scoreFinal >= 50 && anciennete < 3) {
        printf("Evaluation : Satisfaisante\n");
    } 
    else {
        printf("Evaluation : Insuffisante\n");
    }

    return 0;
}
