#include <stdio.h>

int main(){
    int n,comp;
    comp=0;
    printf("Entrez le nombre :");
    scanf("%d", &n);
    comp=0;
    while(n!=0){
        n=n/10;
        comp++;
    }
    printf("le nombre contient : %d",comp);
    return 0;
}