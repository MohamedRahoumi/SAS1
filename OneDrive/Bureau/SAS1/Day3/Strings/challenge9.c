#include <stdio.h>

int main() {
    char chaineChars[100];
    char resultat[100];
    int i, j = 0;

    printf("entrez une chaine de caracteres: ");
    fgets(chaineChars, 100, stdin);

    int i = 0;
    while (chaineChars[i] != '\0') {
        if (chaineChars[i] == '\n') {
            chaineChars[i] = '\0';
            break;
        }
        i++;
    }
    for (i = 0; chaineChars[i] != '\0'; i++) {
        if (chaineChars[i] != ' ') {
            resultat[j++] = chaineChars[i];
        }
    }
    resultat[j] = '\0'; 
    printf("Le resultat est : %s\n", resultat);
    return 0;
}
