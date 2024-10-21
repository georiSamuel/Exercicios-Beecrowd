#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Função que verifica se a soma de dois números é um quadrado perfeito
bool ehQuadradoPerfeito(int x) {
    int raiz = sqrt(x);
    return raiz * raiz == x;
}

int main() {

    int T;
    scanf("%d", &T);  // Leitura do número de casos de teste

    // Para cada caso de teste
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);  // Leitura do número de hastes
        int hastes[N][50]; // N hastes, cada uma pode conter até 50 bolas
        int topo[N];       // Armazena a posição do topo de cada haste

        // Inicializa as hastes como vazias
        for (int j = 0; j < N; j++) {
            topo[j] = 0;
        }

        int bola = 1;      // Inicia com a bola 1
        int count = 0;     // Conta o número total de bolas colocadas
        bool flag = true;  // Controla se ainda podemos colocar bolas

        while (flag) {
            bool colocada = false;

            // Tentar colocar a bola em uma das N hastes
            for (int j = 0; j < N; j++) {
                // Se a haste estiver vazia, colocar a bola
                if (topo[j] == 0) {
                    hastes[j][topo[j]++] = bola;
                    count++;
                    bola++;
                    colocada = true;
                    break;
                }
                // Se não estiver vazia, verificar se a soma é quadrado perfeito
                else if (ehQuadradoPerfeito(hastes[j][topo[j] - 1] + bola)) {
                    hastes[j][topo[j]++] = bola;
                    count++;
                    bola++;
                    colocada = true;
                    break;
                }
            }

            // Se a bola não foi colocada em nenhuma haste, o jogo termina
            if (!colocada) {
                flag = false;
            }
        }

        // Imprime o número máximo de bolas colocadas
        printf("%d\n", count);
    }

    return 0;
}
