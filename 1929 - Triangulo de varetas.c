#include <stdio.h>

int main() {
    int varetas[4];

    // Leitura das varetas
    for (int i = 0; i < 4; i++) {
        scanf("%d", &varetas[i]);
    }

    // Variável para indicar se pelo menos uma combinação pode formar um triângulo
    int pode_formar_triangulo = 0;

    // Verificação de todas as combinações possíveis de 3 varetas
    for (int i = 0; i < 4; i++) {
        int a, b, c;

        if (i == 0) {
            a = varetas[1];
            b = varetas[2];
            c = varetas[3];
        } else if (i == 1) {
            a = varetas[0];
            b = varetas[2];
            c = varetas[3];
        } else if (i == 2) {
            a = varetas[0];
            b = varetas[1];
            c = varetas[3];
        } else if (i == 3) {
            a = varetas[0];
            b = varetas[1];
            c = varetas[2];
        }

        // Verifica se os lados a, b e c podem formar um triângulo
        if (a + b > c && a + c > b && b + c > a) {
            pode_formar_triangulo = 1;
            break; // Não precisa verificar mais combinações, já achou uma possível
        }
    }

    // Saída
    if (pode_formar_triangulo) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
