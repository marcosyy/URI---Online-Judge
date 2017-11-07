#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0,
		n = 0;
					
	scanf("%d", &n);
	
	double f[n];
	
	f[0] = 0;
	f[1] = 1;
	
	for(i = 2; i < n; i++){
		f[i] = f[i - 1] + f[i - 2];
	}

	for(i = 0; i < n; i++){
		if(i < n && i != n -1){
			printf("%.0f ", f[i]);
			continue;
		}	
		if(i == n - 1){
			printf("%.0f\n", f[i]);
			break;
		}
	}
	
	return 0;
	
}
