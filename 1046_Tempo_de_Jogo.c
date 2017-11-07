#include <stdio.h>
 
int main()  {
 
    int i, f, d;
 
    scanf("%d", &i);
    scanf("%d", &f);
 
    if(f > i){
        d = f - i;
    }
 
    else{
        d = (24 - i) + f;
    }
 
    printf("O JOGO DUROU %d HORA(S)\n", d);
 
    return 0;
}
