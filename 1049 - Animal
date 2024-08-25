#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char vertebrado[20];
    char classe[20];
    char aliment[20];

    scanf(" %s %s %s", vertebrado, classe, aliment);

    if (strcmp(vertebrado, "vertebrado") == 0) {
        if (strcmp(classe, "ave") == 0) {
            if (strcmp(aliment, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(aliment, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(classe, "mamifero") == 0) {
            if (strcmp(aliment, "herbivoro") == 0) {
                printf("vaca\n");
            } else if (strcmp(aliment, "onivoro") == 0) {
                printf("homem\n");
            }
        }
    } else if (strcmp(vertebrado, "invertebrado") == 0) {
        if (strcmp(classe, "inseto") == 0) {
            if (strcmp(aliment, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(aliment, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(classe, "anelideo") == 0) {
            if (strcmp(aliment, "onivoro") == 0) {
                printf("minhoca\n");
            } else if (strcmp(aliment, "hematofago") == 0) {
                printf("sanguessuga\n");
            }
        }
    }

    return 0;
}
