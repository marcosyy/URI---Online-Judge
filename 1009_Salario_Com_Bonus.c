#include <stdio.h>
  
int main()  {
  
    char nome[10];
    double sf, tv;  
  
    scanf("%s", &nome);   
    scanf("%lf", &sf);
    scanf("%lf", &tv);
 
    sf = sf + (tv * 0.15);
 
    printf("TOTAL = R$ %.2f\n", sf);                           
  
    return 0;
}
