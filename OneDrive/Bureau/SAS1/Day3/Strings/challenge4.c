#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Entrez la premiere chaine : ");
    scanf("%s", str1);
    printf("Entrez la premiere chaine : ");
    scanf("%s", str2);
    if(strcmp(str2, str1) == 0 )
        printf("la chaine est egale");
    else 
        printf("la chaine est different");

    return 0;
}

