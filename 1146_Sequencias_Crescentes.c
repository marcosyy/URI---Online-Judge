#include <stdio.h>
#include <stdlib.h>
 
int main(){
     
    int x = 0,
        i = 0;
         
         
    do{
        scanf("%d", &x);
        for(i = 1; i <= x; i++){
            printf("%d", i);
            if(i != x){
                printf(" ");
            }
            else{
                printf("\n");
            }
        }
    }while(x != 0);
     
    return 0;
     
}
