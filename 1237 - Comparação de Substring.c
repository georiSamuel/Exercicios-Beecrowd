#include <stdio.h>
#include <string.h>

// Função para encontrar o maior entre dois números
int maior(int a, int b) {
    return (a > b) ? a : b; //Operador Ternário
}

int main() {
    char palavra1[51]; 
    char palavra2[51]; 

    // Loop de leitura de entrada básico
    while(scanf(" %[^\n] %[^\n]", palavra1, palavra2) != EOF) {
        int len1 = strlen(palavra1);
        int len2 = strlen(palavra2);

        int maxLen = 0; // Armazena o comprimento máximo da substring comum

        // Verifica cada caractere de palavra1 e palavra2
        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                int k = 0; // Índice variável para verificar a substring comum

                // Loop continua enquanto os caracteres coincidem e estão dentro dos limites
                //O processamento vai demorar mais, porém dá certo
                while ((i + k < len1) && (j + k < len2) && (palavra1[i + k] == palavra2[j + k])) {
                    k++;
                }

                // Atualiza o comprimento máximo da substring comum encontrada
                maxLen = maior(maxLen, k);
            }
        }

        printf("%d\n", maxLen); // Imprime o comprimento máximo da substring comum
    }

    return 0;
}
