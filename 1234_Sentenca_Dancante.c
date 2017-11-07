#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char normalSent[10000],
		 danceSent[10000];
		 
	int n = 0,
		k = 0,
		y = 0,
		tam = 0;
	
	//Entrada dos testes, enquanto não for EOF
	while(gets(normalSent)){
		
		//Recebe o tamanho do vetor
		tam = strlen(normalSent);
		
		//Incrementa 1 ao tamanho para considerar o caracter \0
		tam += 1;
		
		
		//Transformando a setenca em uma sentenca dancante
		//O primeiro digito sempre sera maiusculo e o segundo minusculo
		//Portanto, sera alternado os indices entre par e impar (0 - 1 - 2 - 3 - 4...)
		//Quando o caracter for um espaco nao devera ter incremento na validacao de par e impar
		//Simplesmente devera receber o espaco e incrementar k, para ir para o proximo caracter
		while(k < tam){
			if(normalSent[k] == ' '){
				danceSent[k] = normalSent[k];
				k++;	
			}
			else{
				if(y % 2 == 0){
					danceSent[k] = toupper(normalSent[k]);
				}
				else{
					danceSent[k] = tolower(normalSent[k]);
				}
				k++;
				y++;
			}
		}
		
		//Impressao da sentenca dancante
		printf("%s\n", danceSent);
		
		//Retorno do valor inicial de k e y
		k = 0;	
		y = 0;			
	}
	
	return 0;
	
}
