#include <stdio.h>
#include <math.h>

int main() {
    int i; scanf("%d", &i);
    int nums[i];

    for (int j = 0; j < i; j++) {
        scanf("%d", &nums[j]);
    }
    
    int index = 0, menor = nums[0];
    
    for (int j = 1; j < i; j++) {
        if (nums[j] < menor){
            menor = nums[j];
            index = j;
        }
    }
            
    printf("Menor valor: %d\nPosicao: %d\n", menor, index);



  

    return 0;
}
