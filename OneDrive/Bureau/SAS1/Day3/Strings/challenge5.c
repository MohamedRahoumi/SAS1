#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chaineChars[25];
    printf("Veuillez enter une chaine de caracteres: ");
    scanf("%s", chaineChars);

    printf("la chaine inverse: %s", strrev(chaineChars));
    return 0;
}
