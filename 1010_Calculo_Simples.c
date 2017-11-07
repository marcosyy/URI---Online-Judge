#include <stdio.h>
  
int main()  {
  
    int cod, num, cod2, num2;
    float vlrUn, vlrUn2, vlrTot; 
 
    scanf("%d %d %f", &cod, &num, &vlrUn);
    scanf("%d %d %f", &cod2, &num2, &vlrUn2);
     
    vlrTot = (vlrUn * num) + (vlrUn2 * num2);
 
    printf("VALOR A PAGAR: R$ %.2f\n", vlrTot);                            
  
    return 0;
}
