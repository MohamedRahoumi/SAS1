#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Entrez le premier entier : ");
    scanf("%d", &x);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &y);

    printf("Le maximum est : %d\n",maximum(x, y));

    return 0;
}
