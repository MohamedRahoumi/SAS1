#include <stdio.h>

int main() {
    char str[100];  
    int i = 0;
    printf("entrez une chaine de caracteres : ");
    fgets(str,100,stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    printf("la longueur de la chaine est : %d\n", i);
    return 0;
}
