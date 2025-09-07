#include <stdio.h>

int main() {
    int n;
    int inv=0;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("Entier inverse : ");
    while (n != 0) {
        inv=inv*10+n%10;
        n /= 10;           
    }
    printf("%d", inv);

    return 0;
}
