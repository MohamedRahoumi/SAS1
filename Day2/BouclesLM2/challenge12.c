#include <stdio.h>

int main() {
    int n, temp;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int t[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &t[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", t[i]);
    printf("\n");

    return 0;
}
