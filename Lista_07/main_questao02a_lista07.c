#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>



// calculo da media aritmetica
int main()
{
	
	int i, X[4];
    int cont, soma=0;
    double U;
	
	//gerar vetor de numeros aleatorios
	for	(i=0;i<=3;i++)
	{
		X[i] = rand ()%3+1;
		if (i% 10 == 0)
			printf("\n");
		printf("   %3d", X[i]);
	}
	printf("\n\n");
	
	
	
	
	//media aritmetica do vetor X com somatorio

	for(cont=0;cont<=3;cont++)
	{
	soma = soma + X[cont];
	}
	
	U = soma / 4;
	printf("%.2lf", U);
	
	
	

	getchar();
	return 0;
}