#include <stdio.h>

int main()
{
  float matriz[12][12], soma = 0, media = 0, elemento;
  int coluna;
  char operacao;

  scanf("%d %c", &coluna, &operacao);

  for (int i = 0; i < 12; i++)
  {

    for (int j = 0; j < 12; j++)
    { scanf("%f", &elemento);
      matriz[i][j] = elemento;}
      
  }
    
    switch(operacao){
    
        case 'M':
        
            for (int k = 0; k < 12; k++){
                media += matriz[k][coluna];
            
            }       
            printf("%.1f\n", media/12);
        
        break;
        
        
        
        case 'S':
        
        for (int k = 0; k < 12; k++){
                soma += matriz[k][coluna];
            
        }       
            
            printf("%.1f\n", soma);
        
        break;
    
    
    }
    

    return 0;
}
