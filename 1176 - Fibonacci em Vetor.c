#include <stdio.h>
#include <stdint.h>  // Necessário para uint64_t

uint64_t fibonacci(int nombre) {
    // Trata casos especiais
    if (nombre == 0) return 0;
    if (nombre == 1) return 1;

    // Variáveis para armazenar valores intermediários
    uint64_t un = 0, doux = 1, aux;

    // Calcula o número de Fibonacci usando variáveis de 64 bits
    for (int i = 2; i <= nombre; i++) {
        aux = un + doux;
        un = doux;
        doux = aux;
    }

    return doux; // Retorna o n-ésimo número de Fibonacci
}

int main() {
    int rep;
    scanf("%d", &rep);

    for (int i = 0; i < rep; i++) {
        int nombre;
        scanf("%d", &nombre);
        printf("Fib(%d) = %llu\n", nombre, fibonacci(nombre));  // Usei %llu para imprimir uint64_t
    }

    return 0;
}
