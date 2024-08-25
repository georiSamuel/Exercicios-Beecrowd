#include <stdio.h>
 
int main() {
	
 	//Cada quadrado tem 0,5 de área pela fórmula A = d^2 / 2
 	
    int L, C, tipo1, tipo2;

    scanf("%d", &L);
    scanf("%d", &C);

    // Cálculo do número de lajotas do tipo 1 e tipo 2
    tipo1 = (L * C) + (L - 1) * (C - 1);
    tipo2 = 2 * (L - 1) + 2 * (C - 1);

    printf("%d\n", tipo1);
    printf("%d\n", tipo2);


    return 0;
}
