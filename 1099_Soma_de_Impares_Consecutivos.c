#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int n = 0,
        i = 0,
        x = 0,
        y = 0,
        soma = 0;
 
    scanf("%d", &n);
 
    for (i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        if (x > y){
            y = y + 1;
            while (x != y){
                if (y % 2 != 0){
                    soma = soma + y;
                }
                y = y + 1;
            }
        }
        else{
            if (x < y){
                x = x + 1;
                while (y != x){
                    if (x % 2 != 0){
                        soma = soma + x;
                    }
                    x = x + 1;
                }
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }
 
    return 0;
 
}
