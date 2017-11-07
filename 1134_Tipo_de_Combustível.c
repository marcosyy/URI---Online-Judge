#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cod = 0,
		alcool = 0,
		gasolina = 0,
		diesel = 0;
	
	do{
		scanf("%d", &cod);
		if(cod < 1 || cod > 4){
			continue;
		}	
		switch(cod) {
		
			case 1 :
				alcool = alcool + 1;
			break;
			
			case 2 : 
				gasolina = gasolina + 1;
			break;
			
			case 3 :
				diesel = diesel + 1;
			break;
			
			case 4 :
			break;
		}
	}while(cod != 4);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
	
}
