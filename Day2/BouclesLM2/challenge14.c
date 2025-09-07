#include <stdio.h>
#include <string.h>

int main() {
    char jours[7][10] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    char choix[10];
    int index = -1;

    printf("jours de la semaine :\n");
    for (int i = 0; i < 7; i++)
        printf("%s\n", jours[i]);

    printf("\nchoisissez un jour : ");
    scanf("%s", choix);

    for (int i = 0; i < 7; i++) {
        if (strcmp(choix, jours[i]) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("jour invalide.\n");
        return 0;
    }

    printf("jour choisi et jours suivants :\n");
    for (int i = index; i < 7; i++) {
        printf("%s\n", jours[i]);
    }

    return 0;
}
