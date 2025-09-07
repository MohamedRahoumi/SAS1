#include <stdio.h>

int main() {
    char c;
    printf("Entrez le cactere");
    scanf("%c", &c);
    if(c>='A'&& c<='Z')
      printf("est un caractere majuscule ");
    else if (c>='a'&& c<='z')
      printf("est un caractere minuscule");
    else 
      printf("n'est pas un caractere");
    return 0;
}
