#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar a função isalpha

int main() {
    int rep;
    scanf("%d", &rep);

    for (int i = 0; i < rep; i++) {
        char word[1000];
        scanf(" %[^\n]", word); // Lê uma frase inteira como entrada

        int total_letras = 0;
        int caract[26] = {0}; // Inicializa um array para contar letras (índices 0 a 25)
        int len = strlen(word);

        // Percorre a frase
        for (int j = 0; j < len; j++) {
            if (isalpha(word[j])) { // Verifica se é uma letra
                char c = tolower(word[j]); // Converte para minúscula para facilitar a contagem
                int index = c - 'a'; // Calcula o índice da letra no array, a em ASCII é 97, aí cada letra diferente representa um índice diferente no array

                // Verifica se a letra já foi contada
                if (caract[index] == 0) {
                    caract[index] = 1; // Marca a letra como contada
                    total_letras++; // Incrementa o contador de letras únicas
                }
            }
        }

        // Verifica o número de letras únicas e imprime o resultado
        if (total_letras == 26) {
            printf("frase completa\n");
        } else if (total_letras >= 13 && total_letras <= 25) {
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}
