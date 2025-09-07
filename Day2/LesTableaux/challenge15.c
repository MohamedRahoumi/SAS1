#include <stdio.h>

int main() {
    int n1, n2;

    printf("Entrez la taille de tableau 1 : ");
    scanf("%d", &n1);
    int t1[n1];

 
    for (int i = 0; i < n1; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t1[i]);
    }

    printf("\nEntrez la taille de tableau 2 : ");
    scanf("%d", &n2);
    int t2[n2];

  
    for (int i = 0; i < n2; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t2[i]);
    }

    int fusion[n1 + n2];
    for (int i = 0; i < n1; i++) {
        fusion[i] = t1[i];
    }
    for (int i = 0; i < n2; i++) {
        fusion[n1 + i] = t2[i];
    }

    printf("\nTableau fusionne :\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }
    printf("\n");

    return 0;
}
