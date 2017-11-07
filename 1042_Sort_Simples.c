#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 0,
        b = 0,
        c = 0,
        i = 0,
        k = 0,
        aux = 0,
        v1[3],
        v2[3];

    for (i = 0; i < 3; i++){
        scanf("%d", &v1[i]);
        v2[i] = v1[i];
    }

    for (i = 0; i < 2; i++){
        for (k = 1; k < 3; k++){
            if (v1[i] > v1[k]){
                aux = v1[i];
                v1[i] = v1[k];
                v1[k] = aux;
            }
        }
    }

    for (i = 0; i < 3; i++){
        printf("%d\n", v1[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++){
        printf("%d\n", v2[i]);
    }

    return 0;

}
