#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double n1 = 0,
		   n2 = 0,
		   media = 0;
	int x = 1,
		y = 0,
		z = 0,
		w = 0;
	
	while (x == 1){
		scanf("%lf", &n1);
		while (y == 0){
			if (n1 >= 0 && n1 <= 10){
				media = media + n1;
				y = 1;
			}
			else{
				printf("nota invalida\n");
				scanf("%lf", &n1);
			}
		}
		scanf("%lf", &n2);
		while (z == 0){
			if (n2 >= 0 && n2 <= 10){
				media = media + n2;
				z = 1;
			}
			else{
				printf("nota invalida\n");
				scanf("%lf", &n2);
			}
		}
		media = media / 2;
	
		printf("media = %.2f\n", media);
		
		media = 0;
		y = 0;
		z = 0;
		w = 0;
		
		while (w == 0){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);
				if (x == 1 || x == 2){
					w = 1;
				}
		}
		
	}
	
	return 0;
	
}
