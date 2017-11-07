#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int N = 0,
		hrs = 0,
		min = 0,
		seg = 0;
	
	scanf("%d", &N);
	
	hrs = (N / 3600);
	min = (N / 60) % 60;
	seg = N % 60;
	
	printf("%d:%d:%d\n", hrs, min, seg);
	
	return 0;
}
