#include <stdio.h>
#include <string.h>

int main() {
    char nome[81];
    char nomeMaior[81] = ""; // Inicializa nomeMaior como uma string vazia

    // Loop para leitura até o fim do arquivo (EOF)
    while (scanf(" %[^\n]", nome) != EOF) {  // Lê a entrada até a nova linha
        int comp = strcasecmp(nome, nomeMaior); //esse tipo de cmp compara sem se importar com case sensitivy

        // Se 'nome' vier depois de 'nomeMaior' em ordem alfabética
        if (comp > 0) {
            strcpy(nomeMaior, nome); // Atualiza nomeMaior
        }
    }

    // Exibe o maior nome encontrado
    printf("%s\n", nomeMaior);  // Garante que uma nova linha seja impressa

    return 0;
}
