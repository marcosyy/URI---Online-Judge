#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int grem = 0,
		inter = 0,
		jogos = 0,
		x = 0,
		y = 0,
		resp = 0,
		vitInter = 0,
		vitGrem = 0,
		empates = 0;
		
	while (x == 0){
		scanf("%d %d", &inter, &grem);
		if (grem > inter){
			vitGrem = vitGrem + 1;
		}
		if (inter > grem){
			vitInter = vitInter + 1;
		}
		if (grem == inter){
			empates = empates + 1;
		}
		jogos = jogos + 1;
		
		y = 0;
		while (y == 0){
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &resp);
			if (resp == 1){
				y = 1;
			}
			if (resp == 2){
				y = 1;
				x = 1;
			}
		}
	}
	
	printf("%d grenais\n", jogos);
	printf("Inter:%d\n", vitInter);
	printf("Gremio:%d\n", vitGrem);
	printf("Empates:%d\n", empates);
	
	if (vitGrem > vitInter){
		printf("Gremio venceu mais\n");
	}
	else{
		printf("Inter venceu mais\n");
	}
	
	return 0;
}
