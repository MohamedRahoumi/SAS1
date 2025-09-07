#include <stdio.h>

int minimum(int a, int b) {
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

    printf("Le minimum est : %d\n",minimum(x, y));

    return 0;
}
