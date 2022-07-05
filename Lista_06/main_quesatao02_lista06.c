//questao 2 lista 6

#include <stdio.h>
#include <stdlib.h>

int main()
{
int m=1, denominador=1, sinal, x, k=1; ;
double termo, cosseno=1;

printf("informe um numero: \n");
scanf("%d", x);

termo=x*x;

while (fabs(termo) <= 0.0001)
    {

sinal=pow(-1,m);

m++; // Contador

denominador=denominador*k*(k+1); // Calcula o fatorial utilizando o fatorial anterior

k=k+2; // Some 2 ao contador dos fatoriais

termo=sinal*pow(x,2*m)/denominador;

cosseno=cosseno+termo;

printf("cosseno: %lf", cosseno);

}

}
