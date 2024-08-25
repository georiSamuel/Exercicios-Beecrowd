#include <stdio.h>
 
int main() {
 	
 	int casos;
 	int inicio= 0;
 	int num;
 	int soma = 0;
 	int i;
 	
	scanf("%d", &casos);
	
	for (inicio; inicio < casos; inicio++) {
		
		soma = 0;	
		scanf("%d",&num );
	
		
		for  (i = 1; i<num ; i++) 
		
		{if (num % i == 0) 
			
				soma += i; }
				
		if (soma == num)
			printf("%d eh perfeito\n", num);
		else
			printf("%d nao eh perfeito\n", num); 
				
				
	}
 
    return 0;
}
