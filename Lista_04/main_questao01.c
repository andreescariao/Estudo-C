//questao 1 lista 4 aluno: andre escariao 119210793
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     int dkm;
     float p1, p2, p3;

     printf("informe quantos quilometros o carro percorreu: \n");
     scanf ("%d", &dkm);

     p1 = (dkm* (2.50));
     p2 = (dkm* (2.25));
     p3 = (dkm* (1.85));

        if (0 < dkm && dkm <= 50)
            {
            printf("o custo do aluguel do carro e 2.50 por km \n");
            printf("valor total a pagar: %d\n", p1);
            }

        if (50 < dkm && dkm <= 100)
            {
            printf("o custo do aluguel do carro e 2.25 por km \n");
            printf("valor total a pagar: %d\n", p2);
            }

        if (100 < dkm && dkm <= 150)
            {
            printf("o custo do aluguel do carro e 1.85 por km \n");
            printf("valor total a pagar: %d\n", p3);
            }


    return 0;
}
