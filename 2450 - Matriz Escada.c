#include <stdio.h>

// Função que verifica se a matriz está na forma de escada
char matriz_escada(unsigned int matriz[][500], int i, int j) {
    int last_col = -1; 
    for (int x = 0; x < i; x++) {
        int col_x = -1; // Posição da primeira coluna não zero na linha atual

        
        for (int y = 0; y < j; y++) {
            if (matriz[x][y] != 0) {
                col_x = y;
                break;
            }
        }


        if (col_x == -1) {
            // As próximas linhas devem ser todas zero
            for (int k = x + 1; k < i; k++) {
                for (int y = 0; y < j; y++) {
                    if (matriz[k][y] != 0) {
                        return 'N'; // Linha abaixo de uma linha de zeros não é zero
                    }
                }
            }
            return 'S'; // A matriz está na forma escada
        }

        // Verificar se a posição do primeiro elemento não zero está à direita do anterior
        if (col_x <= last_col) {
            return 'N'; // A matriz não está na forma escada
        }

        last_col = col_x; 
    }

    return 'S'; // Se passar por todas as verificações, está em forma escada
}

int main() {
    int i, j;

    // Leitura do tamanho da matriz
    scanf("%d %d", &i, &j);

    // Definir a matriz com tamanho máximo de 500x500 pra não faltar espaço
    unsigned int matriz[500][500];

    // Leitura dos valores da matriz
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            scanf("%d", &matriz[x][y]);
        }
    }


    char resultado = matriz_escada(matriz, i, j);


    printf("%c\n", resultado);

    return 0;
}
