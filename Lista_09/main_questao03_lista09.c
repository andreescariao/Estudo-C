// Aluno: André Karine Escarião de Medeiros
// Matrícula: 119210793
// Questão 3 ; lista 9
// Programa que calcula o maior divisor que nao excede a raiz de um numero x

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int naoexcedente(int n);

int main(void)
{
	
	int nmr, anterior;
	
	printf("Digite um numero: \n");
	scanf("%d", &nmr);
	

	anterior = naoexcedente(nmr);
	
	printf("\nMaior numero antecedente da raiz: %d\n", anterior);
	
	
	getch();
	return 0;
}


int naoexcedente(int n)
{
	int i, resultado;
	
	float raiz;
		raiz = sqrt(n);
		
	for (i=1; i<=raiz; i++)
	{
		if ((n%i)==0)
		{
			resultado =i;
		}
	}
		return (resultado);
}
