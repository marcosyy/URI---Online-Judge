#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int senhaTrue = 2002,
		senhaTry = 0;
	
	scanf("%d", &senhaTry);
	
	while (senhaTrue != senhaTry){
		printf("Senha Invalida\n");
		scanf("%d", &senhaTry);
	}
	
	if (senhaTry == senhaTrue){
		printf("Acesso Permitido\n");
	}
	
	return 0;
		
}
