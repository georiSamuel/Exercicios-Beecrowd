#include <stdio.h>
#include <string.h>

int main() {

    char codigo[100];
    scanf("%s", codigo);

    // Calcula o tamanho real da string
    int tamanhoArr = strlen(codigo);

    // Inverte a string
    for(int i = tamanhoArr - 1; i >= 0; i--) {
        printf("%c", codigo[i]);
    }

    printf("\n"); // Para adicionar uma nova linha no final da saída

    return 0;
}
