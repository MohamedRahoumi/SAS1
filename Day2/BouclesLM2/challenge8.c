#include <stdio.h>

int main() {
    int n, cible;
    printf("Entrez la taille : ");
    scanf("%d", &n);

    int t[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]); 
    }

    printf("Entrez le nombre a recherche : ");
    scanf("%d", &cible);

    int debut = 0, fin = n - 1;
    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        if (t[milieu] == cible) {
            printf("Element trouve a la position %d\n", milieu + 1);
            return 0;
        } else if (t[milieu] < cible) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    printf("Element non trouve\n");
    return 0;
}
