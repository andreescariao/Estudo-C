// Gabarito - Questão 13:
#include <stdio.h>
#include <math.h>

int main()
{
	double valor_aproximado = 0, valor_real,termo_1,termo_2,termo_3,termo_4,termo_5;
	int k = 0,num_interacoes;

	printf("Numero de interacoes__________: ");
	scanf("%d", &num_interacoes);
	valor_real = 3.14159265359;

	for(k=0;k < num_interacoes; k++)
	{
		// termos da série:
		termo_1 = (double) 1 / ( pow(16, k) );
		termo_2 = (double) 4 / ((8 * k) + 1 );
		termo_3 = (double) 2 / ((8 * k) + 4 );
		termo_4 = (double) 1 / ((8 * k) + 5 );
		termo_5 = (double) 1 / ((8 * k) + 6 );
		
		valor_aproximado += ( termo_1 * (termo_2 - termo_3 - termo_4 - termo_5) );
		printf("\n%d Interacao: %.14lf = [1/16^(%d) ]*[4/8*%d+1 - 2/8*%d+4 - 1/8*%d+5 - 1/8*%d+6]", k+1, valor_aproximado, k, k, k, k, k);
	}

	printf("\n\nO valor real de pi____________: %.14lf\n", valor_real);
	printf("O valor aproximado de sin(x)__: %.14lf\n", valor_aproximado);
	return 0;
}
