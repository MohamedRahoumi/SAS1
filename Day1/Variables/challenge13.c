#include <stdio.h>

int main() {
    int n;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    printf("En hexadecimal : %X\n", n);
    printf("En binaire     : ");
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}
