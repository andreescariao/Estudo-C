#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, f =1;

    printf ("escreva um numero inteiro: \n");
    scanf ("%d", n);

    if (n>0){
    for( ; n >= 1 ; --n )
    {

     f = f * n;

     printf("o fatorial do numero e: %d\n", f);

    }
    }else{
    printf("erro");
    }

    return 0;
}
