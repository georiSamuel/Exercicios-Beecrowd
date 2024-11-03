#include <stdio.h>
#include <stdbool.h>

int main() {
    int num_cards;
    bool flag = true;
    int cont;
    
    while (flag){
        scanf("%d", &num_cards);
        
        if (num_cards != 0){
            cont = 0;
            int cards[100]; 
            for(int c = 0; c < num_cards; c++){
                cards[c] = ++cont;
            }
            
            int discarded[num_cards - 1];// Array para armazenar cartas descartadas
            int discard_count = 0;
            int start = 0; // índice inicial das cartas válidas
            int end = num_cards; 

        
            while (end - start > 1) {
                // Descartar a carta do topo
                discarded[discard_count++] = cards[start++];

                // Mover a próxima carta para o final
                cards[end++] = cards[start++];
            }

            // Exibir cartas descartadas
            printf("Discarded cards:");
            for (int i = 0; i < discard_count; i++) {
                printf(" %d", discarded[i]);
                if (i < discard_count - 1) printf(",");
            }
            printf("\n");

            // Exibir a carta restante
            printf("Remaining card: %d\n", cards[start]);
            
        }else{
            flag = false;
        }
    }//Fim do while

    return 0;
}
