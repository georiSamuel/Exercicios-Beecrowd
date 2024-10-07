#include <stdio.h>
#include <string.h>

int main() {

    int num, i, h, k; scanf("%d", &num);
    char nomes[num][30];
    char temp[30];
    int comportaram = 0, nao_comportaram = 0;
    
    // Leitura dos nomes (prefiro esse método que o fgets)
    for (i = 0; i < num; i++) {
        scanf(" %[^\n]", nomes[i]);
    }

    //Comparar caractere por caractere até achar a o maior e fazer o Bubble sort
    for (h = 0; h < num; h++){
        for (i = 1; i < num; i++) {
            k = 2;
            while (nomes[i-1][k] == nomes[i][k]){
                k++;  
            }
            if (nomes[i-1][k] > nomes[i][k]){
                strcpy(temp, nomes[i-1]);
                strcpy(nomes[i-1], nomes[i]);
                strcpy(nomes[i], temp);
            }          
            }
    }

    //Contagem de bonzinhos e mauzinhos
    for (i = 0; i < num; i++) {
        if (nomes[i][0] == '+'){
            comportaram++;
        }else{
            nao_comportaram++;
        }
    }

    //Imprime caractere por caractere, achei paia mas enfim :/
    for (h = 0; h < num; h++){
        for (i = 2; i < strlen(nomes[h]); i++) {
            printf("%c", nomes[h][i]);
        }
        printf("\n");
}
    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportaram, nao_comportaram);

    return 0;
}
