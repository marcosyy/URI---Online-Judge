#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		y = 0,
		i = 0;
		
	scanf("%d %d", &x, &y);
	
	if (x > y){
		y++;
		for (i = y; i < x; i++){
			if ((y % 5 == 2) || (y % 5 == 3)){
				printf("%d\n", y);
			}
			y++;
		}
	}
	else{
		if (y > x){
			x++;
			for (i = x; i < y; i++){
				if ((x % 5 == 2) || (x % 5 == 3)){
					printf("%d\n", x);
				}
				x++;
			}
		}
	}
	
	return 0;
}
