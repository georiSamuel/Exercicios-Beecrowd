#include <stdio.h>
#include <string.h>

int main() {
    int rep;
    scanf("%d", &rep); // Número de palavras a serem processadas
    char word[1000];

    for (int i = 0; i < rep; i++) {
        scanf(" %[^\n]", word); // Lê uma linha inteira como entrada, precisa desse espaço vazio para o scand ignorar o /n do outro scanf de rep

        int len = strlen(word); // Pega o comprimento da palavra

        // Passo 1: Incrementa o valor ASCII de cada letra em 3
        for (int j = 0; j < len; j++) {
            if ((word[j] >= 'A' && word[j] <= 'Z') || (word[j] >= 'a' && word[j] <= 'z')) {
                word[j] += 3;
            }
        }

        // Passo 2: Inverte a palavra
        for (int j = 0; j < len / 2; j++) {
            char temp = word[j];
            word[j] = word[len - j - 1];
            word[len - j - 1] = temp;
        }

        // Passo 3: Reduz o valor ASCII de cada caractere da segunda metade em 1
        for (int j = len / 2; j < len; j++) {
            word[j] -= 1;
        }

        printf("%s\n", word);
    }

    return 0;
}
