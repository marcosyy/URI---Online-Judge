#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t = 0,
		pa = 0,
		pb = 0,
		cont = 0,
		i = 0;
	double g1 = 0,
		   g2 = 0;
	
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
		while(pa <= pb){
			if(cont > 100){
				break;
			}
			pa = pa + (pa * g1 / 100);
			pb = pb + (pb * g2 / 100);
			cont++;			
		}
		if(cont <= 100){
			printf("%d anos.\n", cont);
		}
		else{
			printf("Mais de 1 seculo.\n");
		}
		cont = 0;	
	}	
}
