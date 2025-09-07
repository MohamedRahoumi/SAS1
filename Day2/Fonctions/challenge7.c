#include <stdio.h>
#include <string.h>

void inverserChaine(char str[]) {
    int longueur = strlen(str);
    for (int i = 0; i < longueur / 2; i++) {
        char temp = str[i];
        str[i] = str[longueur - 1 - i];
        str[longueur - 1 - i] = temp;
    }
}

int main() {
    char texte[100];

    printf("Entrez une chaine : ");
    scanf("%s", texte); 
    inverserChaine(texte);

    printf("Chaine inversee : %s\n", texte);

    return 0;
}
