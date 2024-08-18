#include <stdio.h>

// Função para calcular o MDC entre dois números
int MDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para encontrar o maior elemento em um array
int Max(int array[], int size) {
    int max = array[0]; // Assume que o primeiro elemento é o maior
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i]; // Atualiza o maior valor encontrado
        }
    }
    return max;
}

int main() {
    int casos;
    scanf("%d", &casos);
    int array[casos];
    int soma = 0;

    // Lê os elementos do array
    for (int inicio = 0; inicio < casos; inicio++) {
        scanf("%d", &array[inicio]);
    }

    int pivo = Max(array, casos); 

    while (soma != casos) {
        pivo++;
        soma = 0;
        for (int i = 0; i < casos; i++) {
            if (MDC(array[i], pivo) == 1) {
                soma++;
            }
        }
    }

    printf("%d\n", pivo);

    return 0;
}
