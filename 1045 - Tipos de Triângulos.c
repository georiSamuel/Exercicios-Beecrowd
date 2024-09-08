#include <stdio.h>
#include <math.h>

int main() {
    double lados[3], temp;

    // Leitura dos lados
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &lados[i]);
    }

    // Ordena os lados em ordem decrescente usando bubble sort
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (lados[i] < lados[j]) {
                temp = lados[i];
                lados[i] = lados[j];
                lados[j] = temp;
            }
        }
    }

    // Calcula o quadrado dos lados
    double A2 = pow(lados[0], 2);
    double B2 = pow(lados[1], 2);
    double C2 = pow(lados[2], 2);

    // Verifica o tipo de triângulo
    if (lados[0] >= lados[1] + lados[2]) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A2 == B2 + C2) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A2 > B2 + C2) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (A2 < B2 + C2) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (lados[0] == lados[1] && lados[1] == lados[2]) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (lados[0] == lados[1] || lados[1] == lados[2] || lados[0] == lados[2]) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
