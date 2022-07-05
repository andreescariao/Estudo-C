// Gabarito - Questão 03:
#include <stdio.h>
#include <math.h>

int main()
{
	double valor_aproximado = 0, valor_real, erro_min_abs, erro_abs,termo_1,termo_2,termo_3,termo_4,termo_5;
	int k = 0;

	printf("Informe o erro minimo absoluto: ");
	scanf("%lf", &erro_min_abs);
	valor_real = 3.14159265359;

	do
	{
		// termos da série:
		termo_1 = (double) 1 / ( pow(16, k) );
		termo_2 = (double) 4 / ((8 * k) + 1 );
		termo_3 = (double) 2 / ((8 * k) + 4 );
		termo_4 = (double) 1 / ((8 * k) + 5 );
		termo_5 = (double) 1 / ((8 * k) + 6 );
		
		valor_aproximado += ( termo_1 * (termo_2 - termo_3 - termo_4 - termo_5) );
		erro_abs = fabs(valor_aproximado - valor_real);
		k++;
		printf("\n%d Interacao: %.14lf = [1/16^(%d) ]*[4/8*%d+1 - 2/8*%d+4 - 1/8*%d+5 - 1/8*%d+6]", k, valor_aproximado, k, k, k, k, k);
	}
	while ( erro_abs > erro_min_abs );

	printf("\n\nO valor real de pi____________: %.14lf\n", valor_real);
	printf("O valor aproximado de sin(x)__: %.14lf\n", valor_aproximado);
	printf("Numero de interacoes__________: %d", k);
	return 0;
}
