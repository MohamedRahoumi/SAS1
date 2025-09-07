#include <stdio.h>

int main() {
    int n, i, somme = 0;


    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        somme += i; 
    }

    printf("La somme des %d premiers entiers est : %d\n", n, somme);

    return 0;
}
