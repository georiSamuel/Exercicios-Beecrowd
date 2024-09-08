#include <stdio.h>

int main() {

    int arr[10];
    int num; scanf("%d", &num);
    arr[0] = num;

    
    for (int j = 1; j < 10; j++) {
        arr[j] = arr[j-1] * 2;
    }

    
    for(int j = 0; j < 10; j++){

        printf("N[%d] = %d\n", j, arr[j]);
    }
    return 0;
}
