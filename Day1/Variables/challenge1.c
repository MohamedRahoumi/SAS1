#include <stdio.h>

int main() {

    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];

    printf("entrez votre nom : ");
    scanf("%s", nom);
    printf("entrez votre prenom : ");
    scanf("%s", prenom);
    printf("entrez votre age : ");
    scanf("%d", &age);
    printf("entrez votre sexe : ");
    scanf(" %c", &sexe); 

    printf("entrez votre adresse email : ");
    scanf("%s", email);

    printf("\n=== vos informations personnelles ===\n");
    printf("Nom      : %s\n", nom);
    printf("Prenom   : %s\n", prenom);
    printf("age      : %d\n", age);
    printf("sexe     : %c\n", sexe);
    printf("email    : %s\n", email);

    return 0;
}
