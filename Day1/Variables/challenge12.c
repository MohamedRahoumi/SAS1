#include <stdio.h>

int main() {
    int n,reste;
    int inverse=0;
    printf("donner un nombre :");
    scanf("%d",&n);
    while(n!=0){
          reste=n%10;
          inverse=inverse*10+reste;
          n=n/10;
    }
    printf("le nombre inveser est : %d",inverse);
    return 0;
}