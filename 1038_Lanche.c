#include <stdio.h>
#include <stdlib.h>

int main(){

    int cod = 0,
        qtd = 0;
    double vlrTotal;

    scanf("%d %d", &cod, &qtd);

    switch (cod)
    {
        case 1 :
            vlrTotal = 4.00 * qtd;
        break;

        case 2 :
            vlrTotal = 4.50 * qtd;
        break;

        case 3 :
            vlrTotal = 5.00 * qtd;
        break;

        case 4 :
            vlrTotal = 2.00 * qtd;
        break;

        case 5 :
            vlrTotal = 1.50 * qtd;
        break;
    }

    printf("Total: R$ %.2f\n", vlrTotal);

    return 0;
}





