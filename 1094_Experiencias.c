#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0,
		qtdC = 0,
		qtdR = 0,
		qtdS = 0,
		qtd = 0,
		qtdT = 0,
		tipo = 0;
	double perC = 0,
		   perR = 0,
		   perS = 0;
	
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d %c", &qtd, &tipo);
			if (tipo == 'C'){
				qtdC = qtdC + qtd;
			}
			if (tipo == 'R'){
				qtdR = qtdR + qtd;
			}
			if (tipo == 'S'){
				qtdS = qtdS + qtd;
			}		
	}
	
	qtdT = qtdC + qtdR + qtdS;
	perC = (qtdC * 100.00) / qtdT; 
	perR = (qtdR * 100.00) / qtdT;
	perS = (qtdS * 100.00) / qtdT;		
	
	printf("Total: %d cobaias\n", qtdT);
	printf("Total de coelhos: %d\n", qtdC);
	printf("Total de ratos: %d\n", qtdR);
	printf("Total de sapos: %d\n", qtdS);
	printf("Percentual de coelhos: %.2f %%\n", perC);
	printf("Percentual de ratos: %.2f %%\n", perR);		
	printf("Percentual de sapos: %.2f %%\n", perS);	
	
	return 0;
	
}
