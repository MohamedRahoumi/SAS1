#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("Le caractere %c est une lettre majuscule.\n", c);
    } 
    else {
        printf("Le caractere %c n'est pas une lettre majuscule.\n", c);
    }

    return 0;
}
