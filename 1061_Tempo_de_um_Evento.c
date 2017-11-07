#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dia1 = 0,
		dia2 = 0,
		hra1 = 0,
		hra2 = 0,
		min1 = 0,
		min2 = 0,
		seg1 = 0,
		seg2 = 0,
		w = 0,
		x = 0,
		y = 0,
		z = 0;
	
	scanf("%*s %d", &dia1);
	scanf("%d %*s %d %*s %d", &hra1, &min1, &seg1);
	
	scanf("%*s %d", &dia2);
	scanf("%d %*s %d %*s %d", &hra2, &min2, &seg2);
	
	if (hra2 > hra1){
		w = dia2 - dia1;
		x = hra2 - hra1;
		if (min2 >= min1){
			y = min2 - min1;
		}
		else{
			y = (60 - min1) + min2;
			x = x - 1;
		}
		if (seg2 >= seg1){
			z = seg2 - seg1;
		}
		else{
			z = (60 - seg1) + seg2;
			y = y - 1;
		}				 
	}
	
	if (hra1 > hra2){
		w = dia2 - dia1 - 1;
		x = (24 - hra1) + hra2; 
		if (min2 >= min1){
			y = min2 - min1;
		}
		else{
			y = (60 - min1) + min2;
			x = x - 1;
		}
		if (seg2 >= seg1){
			z = seg2 - seg1;
		}
		else{
			z = (60 - seg1) + seg2;
			y = y - 1;
		}				 
	}
	
	if (hra1 == hra2){
		w = dia2 - dia1;
		x = hra2 - hra1; 
		if (min2 >= min1){
			y = min2 - min1;
		}
		else{
			y = (60 - min1) + min2;
			x = x - 1;
		}
		if (seg2 >= seg1){
			z = seg2 - seg1;
		}
		else{
			z = (60 - seg1) + seg2;
			y = y - 1;
		}				 
	}		
	
	printf("%d dia(s)\n", w);
	printf("%d hora(s)\n", x);
	printf("%d minuto(s)\n", y);
	printf("%d segundo(s)\n", z);
		
	return 0;
}
