#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int par[5],
		impar[5],
		i = 0,
		j = 0,
		x = 0,
		z = 0,
		y = 0,
		contPar = 0,
		contImpar = 0;
			
	
	do{
		scanf("%d", &x);
		if(x % 2 == 0){
			par[y] = x;
			contPar++;
			if(contPar == 5){
				for(j = 0; j < 5; j++){
				printf("par[%d] = %d\n", j, par[j]);
				contPar = 0;
				y = -1;
				}				
			}
			y++;
		}
		else{
			impar[z] = x;
			contImpar++;
			if(contImpar == 5){
				for(j = 0; j < 5; j++){
				printf("impar[%d] = %d\n", j, impar[j]);
				contImpar = 0;
				z = -1;
				}
			}
			z++;
		}
		i++;
	}while(i < 15);
	
	for(i = z - z; i < z; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}
	for(j = y - y; j < y; j++){
		printf("par[%d] = %d\n", j, par[j]);
	}
	
	return 0;
	
}
