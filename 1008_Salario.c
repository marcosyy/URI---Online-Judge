#include <stdio.h>
           
int main() {
              
    int num, hrs;
    double sal;
              
    scanf("%d", &num);
    scanf("%d", &hrs);
    scanf("%lf", &sal);
              
    sal = sal * hrs;
              
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal);
              
    return 0;
}
