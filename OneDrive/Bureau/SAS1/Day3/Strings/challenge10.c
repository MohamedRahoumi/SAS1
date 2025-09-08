#include <stdio.h>
#include <string.h>

int main() {
    char chainep[1000], recherche[1000];
    printf("entrez la chaine principale : ");
    fgets(chainep,1000, stdin);

    chainep[strcspn(chainep, "\n")] = '\0';

    printf("entrez la sous-chane à rechercher : ");
    fgets(recherche, 1000, stdin);
    recherche[strcspn(recherche, "\n")] = '\0';
    ++
    if (strstr(chainep,recherche) != NULL) {
        printf("La souschaine  est presente.\n");
    } else {
        printf("La souschaine  n'est pas presente .\n");
    }
    return 0;
}
