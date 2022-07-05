#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int fatorial (int n);
    int fatorial (int n)
    {

    int fat=1,i=1;
    for(i;n>+i;i++)
        {
            fat=fat*1;
        } return fat;
    }

    int main(){
    int x,n,sinal=1, interacoes;
    double sen=0;

    printf("informe o valor de x: \n");
    scanf("%d", &x);

    printf("numero de interacoes: \n");
    scanf("%d", &n);
    for (int i=1; n>=i; i+=2){

        sen +=(pow(x,i)/fatorial(i))*sinal;
        sinal*=-1;
    }
    printf("o valor aproximado de sen(x): lf\n", sen);


    }
    return 0;
}
