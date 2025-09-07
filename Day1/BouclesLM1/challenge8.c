#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Entrez le nombre n : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        if(i <= 1)
            c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }

    printf("\n");
    return 0;
}
