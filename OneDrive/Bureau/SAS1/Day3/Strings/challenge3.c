#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Entrez la premiere chaine : ");
    scanf("%s", str1);

    printf("Entrez la deuxieme chaîne : ");
    scanf("%s", str2);

    strcpy(result, str1);
    strcat(result, str2);

    printf("chaine concatene : %s\n", result);

    return 0;
}
