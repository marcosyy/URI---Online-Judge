#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int t = 0,
		cont1 = 0,
		cont2 = 0,
		cont3 = 0,
		tam = 0,
		j = 0,
		k = 0,
		i = 0;
	char num[6],
		 three[] = "three",
	     one[] = "one",
	     two[] = "two";
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%s", num);
		tam = strlen(num);
		
		if(tam == 3){
			for(j = 0; j <= tam; j++){
				for(k = 0; k <= tam; k++){
					if(num[j] == one[k]){
						cont1++;
					}
					if(num[j] == two[k]){
						cont2++;
					}
				}
			}
		}
		else{
			for(j = 0; j <= tam; j++){
				for(k = 0; k <= tam; k++){
					if(num[j] == three[k]){
						cont3++;
					}
				}
			}
		}				
		if(cont1 >= cont2 && cont1 > cont3){
			printf("1\n");
		}
		else{
			if(cont2 > cont3){
				printf("2\n");
			}
			else{
				printf("3\n");
			}
		}
		cont1 = 0;
		cont2 = 0;
		cont3 = 0;
	}	
	
	return 0;
		
}
