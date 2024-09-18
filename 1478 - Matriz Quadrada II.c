#include <stdio.h>

int main() {
    int t, ini = 1;

    while (scanf("%d", &t) == 1 && t != 0) {

        int matriz[t][t];


        for (int x = 0; x < t; x++) {
            ini = x+1;
            for (int y = 0; y < t; y++) {

                if(x == 0 || y == 0){
                    matriz[x][y] = ini; //Cada início de linha ou coluna recebe um aumento constante 
                    ini++;

                } else {
                        matriz[x][y] = matriz[x-1][y-1]; //O restante dos valores segue o padrão da matriz (sempre pegar o elementos da linha anterior e coluna anterior)
                    }


            }

        }




     for (int x = 0; x < t; x++) {
        for (int y = 0; y < t; y++) {
            if (y > 0) {
                printf(" ");
            }
            printf("%3d", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\n"); // Linha em branco após cada matriz
      
    }  //Fim do while

    return 0;
}
