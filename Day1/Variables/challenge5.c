#include <stdio.h>

int main() {
    float c;
    float kmh;
    printf("donner la tempurature en c :");
    scanf("%f",&c);
    if(c<0 )
      printf("solide");
    else if (c<100)
        printf("Liquide");
    else
      printf("gaz");
    return 0;
}