#include <stdio.h>
#include <math.h>  

int main() {
    float r, volume;

    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);

    volume = (4/ 3) * 3.14 * pow(r, 3);

 
    printf("Le volume de la sphere est : %.2f\n", volume);

    return 0;
}
