#include <stdio.h>

int main(){
    int a,i,s;
    printf("Entrez le nombre :");
    scanf("%d", &a);
    s=0;
    for (i=1;i<=a;i++){
        s=s+i;
    }  
     printf("la somme est : %d",s);
    return 0;
}