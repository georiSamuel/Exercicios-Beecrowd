#include <stdio.h>

int main() {
    int numLesmas;

    // Enquanto houver entradas, processa-as
    while (scanf("%d", &numLesmas) != EOF) {
        int velocidades[numLesmas];
        int maior = 0;  // Inicializa a variável maior

        // Lê as velocidades das lesmas
        for (int i = 0; i < numLesmas; i++) {
            scanf("%d", &velocidades[i]);
            if (velocidades[i] > maior) {
                maior = velocidades[i];
            }
        }

        // Determina o nível da lesma mais veloz
        if (maior < 10) {
            printf("1\n");
        } else if (maior >= 10 && maior < 20) {
            printf("2\n");
        } else { // maior >= 20
            printf("3\n");
        }
    }

    return 0;
}
