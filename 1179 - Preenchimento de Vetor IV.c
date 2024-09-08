#include <stdio.h>

int main() {
    int arr[15];         
    int par[5];         
    int impar[5];       
    
    int i, j = 0, k = 0; // Índices para vetores par e ímpar, respectivamente

    // Leitura dos 15 números inteiros
    for (i = 0; i < 15; i++) {
        scanf("%d", &arr[i]);
    }

    // Processa cada número lido
    for (i = 0; i < 15; i++) {
        if (arr[i] % 2 == 0 && arr[i] != 0) {
            // Adiciona número par ao array par
            par[j++] = arr[i];
            // Se o array par estiver cheio, imprime e reinicializa
            if (j == 5) {
                for (int h = 0; h < 5; h++) {
                    printf("par[%d] = %d\n", h, par[h]);
                }
                j = 0; // Reinicializa o índice para o array par
            }
        } else if (arr[i] % 2 != 0) {
            // Adiciona número ímpar ao array ímpar
            impar[k++] = arr[i];
            // Se o array ímpar estiver cheio, imprime e reinicializa
            if (k == 5) {
                for (int g = 0; g < 5; g++) {
                    printf("impar[%d] = %d\n", g, impar[g]);
                }
                k = 0; // Reinicializa o índice para o array ímpar
            }
        }
    }

    // Imprime os valores restantes no array ímpar, se houver
    for (int g = 0; g < k; g++) {
        printf("impar[%d] = %d\n", g, impar[g]);
    }

    // Imprime os valores restantes no array par, se houver
    for (int h = 0; h < j; h++) {
        printf("par[%d] = %d\n", h, par[h]);
    }

    return 0;
}
