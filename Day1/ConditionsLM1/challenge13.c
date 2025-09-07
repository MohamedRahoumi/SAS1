#include <stdio.h>

int main() {
    float x1, y1, x2, y2; 
    float px, py;           
    printf("Entrez x1 y1 : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez x2 y2 : ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez px py : ");
    scanf("%f %f", &px, &py);


    if ((px - x1)*(y2 - y1) == (py - y1)*(x2 - x1) &&
        px >= (x1 < x2 ? x1 : x2) && px <= (x1 > x2 ? x1 : x2) &&
        py >= (y1 < y2 ? y1 : y2) && py <= (y1 > y2 ? y1 : y2)) {
        printf("Le point est sur le segment.\n");
    } else {
        printf("Le point n'est pas sur le segment.\n");
    }

    return 0;
}
