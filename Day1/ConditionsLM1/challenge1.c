#include <stdio.h>

int main() {
   
   int a;
   printf("donner un nombre :");
   scanf("%d",&a);
   if(a%2==0)
      printf("%d est un nombre pair",a);
   else {
            printf("%d est un nombre impair",a);
   }
   return 0;
}