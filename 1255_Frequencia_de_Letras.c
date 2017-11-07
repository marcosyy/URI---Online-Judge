#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int qtd[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	    i = 0,
	    j = 0,
	    t = 0,
	    k = 0,
	    maior = 0;
	    
	char abc[] = "abcdefghijklmnopqrstuvwxyz",
	     texto[201];
	
	
	
	scanf("%d\n", &t);
	
	for(i = 0; i < t; i++){
		
		gets(texto);
		
		for(j = 0; j < strlen(texto); j++){
			texto[j] = tolower(texto[j]);
			for(k = 0; k < strlen(abc); k++){
				if(texto[j] == abc[k]){
					qtd[k]++;
				}
			}
		}
		
		maior = qtd[0];
		
		for(j = 0; j < strlen(abc); j++){
			if(qtd[j] > maior){
				maior = qtd[j];
			}
		}
		
		for(j = 0; j < strlen(abc); j++){
			if(maior == qtd[j]){
				printf("%c", abc[j]);
			}
		}
		
		for(j = 0; j < 26; j++){
			qtd[j] = 0;
		}
		
		printf("\n");					
	}
	
	return 0;
	
}
