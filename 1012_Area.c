#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double a = 0,
		   b = 0,
		   c = 0,
		   pi = 3.14159,
		   areaTriangulo = 0,
		   areaCirculo = 0,
		   areaTrapezio = 0,
		   areaQuadrado = 0,
		   areaRetangulo = 0;
		   
	scanf("%lf %lf %lf", &a, &b, &c);
	
	areaTriangulo = (a * c) / 2;
	areaCirculo = pi * pow(c,2);
	areaTrapezio = ((a + b) * c) / 2;
	areaQuadrado = pow(b,2);
	areaRetangulo = a * b;
	
	printf("TRIANGULO: %.3f\n", areaTriangulo);
	printf("CIRCULO: %.3f\n", areaCirculo);
	printf("TRAPEZIO: %.3f\n", areaTrapezio);
	printf("QUADRADO: %.3f\n", areaQuadrado);
	printf("RETANGULO: %.3f\n", areaRetangulo);
	
	return 0;	
}
