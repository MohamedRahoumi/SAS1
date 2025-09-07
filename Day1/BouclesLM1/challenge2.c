#include <stdio.h>

int main(){
    int a,i,f;
    printf("Entrez le nombre :");
    scanf("%d", &a);
    f=1;
    for (i=1;i<=a;i++){
        f=f*i;
    } 
    printf("la factoriele de %d est : %d",a,f);
    return 0;
}