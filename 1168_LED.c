#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int t = 0,
		i = 0,
		k = 0,
		tam = 0,
		cont = 0;
		
	char led[101];
	
	scanf("%d\n", &t);
	
	for(i = 0; i < t; i++){
		gets(led);

		while(led[k] != '\0'){
			
			switch(led[k]){
				
				case '0':
					cont += 6;
					k++;
				break;
				
				case '1':
					cont += 2;
					k++;
				break;	
							
				case '2':
					cont += 5;
					k++;
				break;	
							
				case '3':
					cont += 5;
					k++;
				break;	
							
				case '4':
					cont += 4;
					k++;
				break;	
							
				case '5':
					cont += 5;
					k++;
				break;	
							
				case '6':
					cont += 6;
					k++;
				break;	
							
				case '7':
					cont += 3;
					k++;
				break;	
							
				case '8':
					cont += 7;
					k++;
				break;	
							
				case '9':
					cont += 6;
					k++;
				break;				
			}
		}
		
		printf("%d leds\n", cont);
		cont = 0;
		k = 0;
		
	}
	
	return 0;
	
}
