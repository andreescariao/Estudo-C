// fib -> 0 1 1 2 3 5 8 13
// indice 0 1 2 3 4 5 6 7

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ant, prox, soma, i, nr;
    ant = 0;
    prox = 1;

    printf("digite o numero de termos: \n");
    scanf("%d", &nr);

    for(i =0; i < nr; i++)
    {
        soma = ant + prox;
        ant = prox;
        prox = soma;

        printf("%d\n", soma);

    }

    return 0;
}
