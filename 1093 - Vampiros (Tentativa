#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerador_de_casos(int Ev1, int Ev2, int At, int D) {
    // Inicializa o gerador de números aleatórios fora do loop
    while (Ev1 > 0 && Ev2 > 0) {
        int dado = 1 + rand() % 6;
      
        if (dado <= At) {
            Ev2 -= D;
            Ev1 += D;
        } else {
            Ev1 -= D;
            Ev2 += D;
        }
    }
    return (Ev1 > 0);
}

int main() {
    int Ev1, Ev2, At, D, c = 1;
    float probabilidade;

    // Inicializa o gerador de números aleatórios com a hora atual
    srand(time(NULL));

    while (c != 0) {
        scanf("%d %d %d %d", &Ev1, &Ev2, &At, &D);

        if (Ev1 == 0 && Ev2 == 0 && At == 0 && D == 0) {
            c = 0;
        } else {
            int v1Wins = 0; // Inicializa v1Wins a zero para cada novo conjunto de simulações

            for (int i = 0; i < 1000; i++) {
                if (gerador_de_casos(Ev1, Ev2, At, D)) {
                    v1Wins++;
                }
            }
            probabilidade = (float)v1Wins / 1000;
          
            printf("%.1f\n", probabilidade * 100);
        }
    }

    return 0;
}
