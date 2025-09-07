#include <stdio.h>

int main() {
    int age, type, accidents;
    float primebase = 100; 
    float prime_f;

    printf("Entrez l'âge : ");
    scanf("%d", &age);
    printf("Entrez le type : ");
    scanf("%d", &type);
    printf("Entrez le nombre d'accidents : ");
    scanf("%d", &accidents);

    if (age < 25) {
        prime_f = primebase * 1.5;
    } 
    else if (age >= 25 && age <= 65) {
        prime_f = primebase;
    } 
    else {
        prime_f = primebase * 1.2;
    }

    if (type == 1) {
        prime_f *= 2;  
    } 
    else if (type == 2) {
        prime_f *= 1.2;  
    } 
    else if (type == 3) {
        prime_f *= 1.1;  
    }
    if (accidents > 1) {
        prime_f *= 1.3;  
    }

    printf("La prime d'assurance finale est : %.2f\n", prime_f);

    return 0;
}
