#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0;
	double	n1 = 0,
			n2 = 0,
			n3 = 0,
			media = 0;
		
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%lf %lf %lf", &n1, &n2, &n3);
		media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
		printf("%.1f\n", media);				
	}
	
	return 0;	
		
}
