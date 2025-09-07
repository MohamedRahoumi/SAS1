#include <stdio.h>

int main() {
    int n,s;
    s=0;
    printf("entrez la taille ");
    scanf("%d", &n);

    int t[n];

    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t[i]);
    }

    for (int i = 0; i < n; i++) {
        s=s+t[i];
    }
    printf("la somme est : %d",s);
    return 0;
}
