/*

OBS: Nesse exércicio fiz o algoritmo QuickSort do zero, para entender melhor como ele funciona,
mas o próprio C já tem uma função da stdlib.h chamada 'qsort()' que segue o mesmo princípio e deixaria o código BEM menor

  */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de partição para QuickSort
int partition(int* arr, int low, int high) {
    srand(time(NULL)); // Gerador de números aleatórios
    int random_pivot = low + rand() % (high - low + 1); // Escolhe um pivô aleatório
    swap(&arr[random_pivot], &arr[high]); // Coloca o pivô no final
    int pivot = arr[high]; // Pivô
    int i = low - 1; // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função recursiva de QuickSort
void QuickSort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Particiona o array

        // Ordena os subarrays recursivamente
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}
    

int main() {

    int num, i; 

    while(scanf("%d", &num) != EOF){
    
    int codes[num];
    // Leitura dos códigos (prefiro esse método que o fgets)
    for (i = 0; i < num; i++) {
        scanf("%d", &codes[i]);
    }

    QuickSort(codes, 0, num - 1);

    // Impressão dos códigos ordenados
    
    for (i = 0; i < num; i++) {
        printf("%04d\n", codes[i]);
    }

    }
    return 0;
        
        }
