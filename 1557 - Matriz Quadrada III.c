#include <stdio.h>
#include <string.h>

int main() {
    int t; 

    while (scanf("%d", &t) == 1) {

        if(t == 0){
            break;
        }


        int matriz[t][t];
        int n = 1, m = 1;
        int maxValue = 0; // Para encontrar o maior valor na matriz

        for (int x = 0; x < t; x++) {
            for (int y = 0; y < t; y++) {
                matriz[x][y] = n * m;
                if (matriz[x][y] > maxValue) {
                    maxValue = matriz[x][y];
                }
                m *= 2;
            }
            n *= 2;
            m = 1; // Reset m para cada nova linha
        }

        // Calcula o número de dígitos do maior valor
        char digitF[20];
        sprintf(digitF, "%d", maxValue); // Converte o valor de max Value me uma string
        int digit = strlen(digitF);

    
     for (int x = 0; x < t; x++) {
        for (int y = 0; y < t; y++) {
            if (y > 0) {
                printf(" ");
            }
            printf("%*d", digit, matriz[x][y]);
        }
        printf("\n");
    }
    printf("\n"); // Linha em branco após cada matriz
    }  
    
    return 0;
}
