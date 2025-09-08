#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Entrez la chaine : ");
    scanf("%s", str);
    printf("la chaine en majuscule : %s ",strlwr(str));

    return 0;
}

