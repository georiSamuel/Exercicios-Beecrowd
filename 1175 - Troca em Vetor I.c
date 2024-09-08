#include <stdio.h>
#include <stdint.h>  // Necessário para uint64_t


int main() {
   int arr[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        int aux = arr[i];
        arr[i] = arr[19 - i];;
        arr[19 - i] = aux;
       
    }
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
