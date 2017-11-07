#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int m = 1,
		n = 1,
		i = 0,
		soma = 0;
	
	scanf("%d %d", &m, &n);
		
	while ((m > 0) && (n > 0)){
			if (m == n){
				printf("%d Sum=%d\n", m, n);
			}
			if (m > n){
				for (i = n; i <= m; i++){
					printf("%d ", n);
					soma = soma + n;
					n = n +1;
				}
				printf("Sum=%d\n", soma); 
				soma = 0;			
			}			
			else{
				if (m < n){
					for (i = m; i <= n; i++){
						printf("%d ", m);
						soma = soma + m;
						m = m + 1;
					}
					printf("Sum=%d\n", soma);
				}
				soma = 0;		
			}
			scanf("%d %d", &m, &n);				
	}
	
	return 0;
	
}
