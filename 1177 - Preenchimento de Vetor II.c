#include <stdio.h>

int main() {

    int arr[1000];
    int num; scanf("%d", &num);
    int i = 0;
    
    for (int j = 0; j < 1000; j++) {
        arr[j] = i;
        i++;
        if (i >= num) {
            i = 0; // Reinicia i quando atinge num
        }
    }

    for(int j = 0; j < 1000; j++){

        printf("N[%d] = %d\n", j, arr[j]);
    }
    return 0;
}
