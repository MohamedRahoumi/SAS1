#include <stdio.h>

int main() {
   
   char a;
   printf("donner un voyelle :");
   scanf("%c",&a);
   switch(a){
      case 'a' : printf("voyelle");
                 break;
      case 'e' : printf("voyelle");
                 break;
      case 'u' : printf("voyelle");
                 break;
      case 'i' : printf("voyelle");
                 break;
      case 'o' : printf("voyelle");
                 break;
      default : printf("c'est na pas un voyelle");      

   }
   return 0;
}