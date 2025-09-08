#include<stdio.h>

int main () {
   char p[20];
   printf("donner moi la chaine de caractere :");
   fgets(p,20,stdin);
   printf("%s",p);
   return 0 ;
}