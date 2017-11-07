#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade = 0,
		ano = 0,
		mes = 0,
		dia = 0;
		
		scanf("%d", &idade);
		
		ano = idade / 365;
		mes = (idade - (ano * 365)) / 30;
		dia = (idade - (ano * 365)) % 30;
		
		printf("%d ano(s)\n", ano);
		printf("%d mes(es)\n", mes);
		printf("%d dia(s)\n", dia);
		
		return 0;
			
}
