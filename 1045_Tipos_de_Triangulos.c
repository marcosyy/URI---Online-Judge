#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double a = 0,
		   b = 0,
		   c = 0,
		   maior = 0;
		   
	scanf("%lf %lf %lf", &a, &b, &c);
			
	if ((a >= b) && (a >= c)){
	}
	else{
		if ((b >= a) && (b >= c)){
			maior = b;
			b = a;
			a = maior;
		}
		if ((c >= a) && (c >= b)){
			maior = c;
			c = a;
			a = maior;
		}
	}
	
	if (a >= b + c){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if (pow(a,2) == pow(b,2) + pow(c,2)){
			printf("TRIANGULO RETANGULO\n");
		}
		if (pow(a,2) > pow(b,2) + pow(c,2)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if (pow(a,2) < pow(b,2) + pow(c,2)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if ((a == b) && (b == c)){
			printf("TRIANGULO EQUILATERO\n");
		}
		if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a))){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	
	return 0;
}
