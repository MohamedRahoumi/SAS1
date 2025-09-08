#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char chaineChars[100];  
    char lettre;
    int i, j = 0;

    printf("Entrez une chaine de caracteres: ");
    fgets(chaineChars, 100, stdin);

    int size = strlen(chaineChars);
    printf("Entrez un caractere: ");
    scanf(" %c", &lettre);

    for (i = 0; i < size; i++) {
        if (chaineChars[i] == lettre) {
            j++;
        }
    }

    printf("La lettre '%c' est repeter %d fois.\n", lettre, j);

    return 0;
}
