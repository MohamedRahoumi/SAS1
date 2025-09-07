#include <stdio.h>

int main() {
    int tmp,n,s;
    s=0;
    printf("entrez la taille ");
    scanf("%d", &n);

    int t[n];

    for (int i = 0; i < n; i++) {
        printf("T %d : ", i + 1);
        scanf("%d", &t[i]);
    }
    
    for (int i = 0; i < n; i++) {
     for (int j =i+1; j < n; j++){
         if (t[i]>t[j])
         {
            tmp=t[j];
            t[j]=t[i];
            t[i]=tmp;            
         }
         
    }}
     printf("le tableaux ordonne");
    for (int i = 0; i < n; i++) {
        printf("%d\n", t[i]);
    }
    return 0;
}
