#include <stdio.h>

int main() {
    int N, M; scanf("%d", &N); 

    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        int P[M];
        int P_ref[M];
        int same_place = 0;

    
        for (int j = 0; j < M; j++) {
            scanf("%d", &P[j]);
            P_ref[j] = P[j]; // Copia array original para comparar mais tarde
        }
        // Selection sort 
        for (int k = 0; k < M; k++) {
            int max_index = k;
            for (int j = k + 1; j < M; j++) {
                if (P[j] > P[max_index]) {
                    max_index = j;
                }
            }
            
            // Troca elementos
            int temp = P[k];
            P[k] = P[max_index];
            P[max_index] = temp;

        }
        // Checa se as posições permaneceram iguais
        for (int l = 0; l < M; l++){
            if (P_ref[l] == P[l]) {
                same_place++;
            }
        }
        
        printf("%d\n", same_place);

 }

    return 0;
}
