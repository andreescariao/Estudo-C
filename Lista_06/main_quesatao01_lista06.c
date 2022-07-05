//questao 1 lista 6

#include <stdio.h>

int main(void)
{

     float x, ref, h, fat, errominimo, expserie=0, erroabsoluto=1;

      int i,j=0;

       printf("Informe o valor de x: ");
        scanf("%f", &x);

         printf("Informe o erro min absoluto: ");
          scanf("%f", &errominimo);

           printf("Referencia exp(x): %1.13f \n", ref = exp(x));



while(errominimo < erroabsoluto )
    {
        fat = 1;
for(i=1; i<=j; i++)
    {
        fat = fat * (float) i;
}

expserie = expserie + ( (pow(x,(float)j)) / fat);
 erroabsoluto = (float)abs(ref - expserie);

  printf("j: %d - fat(j): %f - expserie: %1.12f - erroabsoluto: %1.12f\n", j, fat, expserie, erroabsoluto);

   j = j + 1;

    }

     printf("Numero de iteracoes_: %d \n", j); printf("Valor aproximado____: %1.12f \n", expserie);

     return 0;

    }

