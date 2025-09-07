#include <stdio.h>

int main() {
    int n,s,m;
    s=0;
    m=0;
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
    m=s/n;
    printf("la moyenne est : %d",m);
    return 0;
}
