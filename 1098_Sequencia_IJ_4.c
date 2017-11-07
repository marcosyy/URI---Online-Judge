#include <stdio.h>
#include <stdlib.h>

int main(){

    float i = 0,
        j = 0;

    for (i = 0, j = 1; j < 4; j++){
        printf("I=%.0f J=%.0f\n", i, j);
    }

    for (i = 0.2; i < 1; i += 0.2){
        for (j = 1 + i; j < 4; j++){
            printf("I=%.1f J=%.1f\n", i, j);
        }
    }

    for (i = 1, j = 2; j < 5; j++){
        printf("I=%.0f J=%.0f\n", i, j);
    }

    for (i = 1.2; i < 2; i += 0.2){
        for (j = 1 + i; j < 5; j++){
            printf("I=%.1f J=%.1f\n", i, j);
        }
    }

    for (i = 2, j = 3; j < 6; j++){
        printf("I=%.0f J=%.0f\n", i, j);
    }

    return 0;

}
