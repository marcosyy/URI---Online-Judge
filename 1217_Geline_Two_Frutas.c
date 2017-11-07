#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int t = 0,
		i = 0,
		k = 0,
		totalFrutas = 0,
		contFrutas = 1;	
		
	double vlrDia = 0,
		   mediaKg = 0,
		   mediaVlr = 0,
		   vlrTotal = 0;
		   
	char frutas[10000];
		   	
	//Leitura da qtd de casos de testes
	scanf("%d", &t);
	
	//Testes
	for(i = 0; i < t; i++){
		
		//Leitura do vlr gasto no dia
		scanf("%lf\n", &vlrDia);
		
		//Acumulador do vlr gasto
		vlrTotal += vlrDia;
		
		//Leitura das frutas compradas no dia
		gets(frutas);
		
		//Validacao de qtas frutas foram compradas no dia
		while(frutas[k] != '\0'){
			if(frutas[k] == ' '){
				contFrutas++;
			}
			k++;
		}
		
		//Retorno do vlr inicial de k
		k = 0;
		
		//Acumulador da quantidade de frutas
		totalFrutas += contFrutas;
		
		//Impressao da qtd de kg de frutas por dia
		printf("day %d: %d kg\n", i + 1, contFrutas);
		
		//Retorno da qtde inicial de frutas
		contFrutas = 1;				
	}
	
	//Calculo da qtde media em kg de frutas por dia
	mediaKg = totalFrutas / (double)i;
	
	//Calculo do vlr medio gasto de frutas por dia
	mediaVlr = vlrTotal / i;
	
	//Impressao da media de kg de frutas por dia
	printf("%.2f kg by day\n", mediaKg);
	
	//Impressao do vlr medio gasto de frutas por dia
	printf("R$ %.2f by day\n", mediaVlr);	
	
}
