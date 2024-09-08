#include <stdio.h>

int main() {

    long dinheiro; scanf("%ld", &dinheiro);
    long valorOriginal = dinheiro;
    int notas[7] = {0}; //Atalho para criar array só de 0's

    if (dinheiro >= 100) {
        notas[0] += dinheiro/100;
        dinheiro = dinheiro%100;
        
        
    } 
    if(dinheiro >= 50){
        notas[1] += dinheiro/50;
        dinheiro = dinheiro%50;
        
        
    }
    if (dinheiro >= 20) {
        notas[2] += dinheiro/20;
        dinheiro = dinheiro%20;


    } 
    if (dinheiro >= 10) {
        notas[3] += dinheiro/10;
        dinheiro = dinheiro%10;


    } 
    if (dinheiro >= 5) {
        notas[4] += dinheiro/5;
        dinheiro = dinheiro%5;


    } 
    if (dinheiro >= 2) {
        notas[5] += dinheiro/2;
        dinheiro = dinheiro%2;


    } 
    if (dinheiro >= 1) {
        notas[6] += dinheiro/1;
        dinheiro = dinheiro%1;


    } 

    

    printf("%ld\n"
        "%d nota(s) de R$ 100,00\n"
        "%d nota(s) de R$ 50,00\n"
        "%d nota(s) de R$ 20,00\n"
        "%d nota(s) de R$ 10,00\n"
        "%d nota(s) de R$ 5,00\n"
        "%d nota(s) de R$ 2,00\n"
        "%d nota(s) de R$ 1,00\n", valorOriginal, notas[0], notas[1], notas[2], notas[3], notas[4], notas[5], notas[6]);




    
    



    return 0;
}
