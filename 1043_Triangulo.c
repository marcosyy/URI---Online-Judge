#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float a = 0,
		  b = 0,
		  c = 0,
		  p = 0,
		  ar = 0;
		  
		  scanf("%f %f %f", &a, &b, &c);
		  
		  if ((a + b > c) && (a + c > b) && (b + c > a)){
		  	p = a + b + c;
		  	printf("Perimetro = %.1f\n", p);  	  	
		  }
		  else{
		  	ar = ((a + b) * c) / 2;
		  	printf("Area = %.1f\n", ar);
		  }
	      
		  return 0;
}
