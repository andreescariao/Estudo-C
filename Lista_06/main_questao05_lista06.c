// Gabarito - Questão 05:
#include <stdio.h>
#include <math.h>

int main()
{
	double valor_aproximado = 0, valor_real, fatorial, erro_min_abs, erro_abs;
	int x, i, n = 0;

	printf("Informe o valor de x__________: ");
	scanf("%d", &x);
	printf("Informe o erro minimo absoluto: ");
	scanf("%lf", &erro_min_abs);
	valor_real = sinh(x);

	do
	{
		for(fatorial = 1, i = 2 * n + 1; i >= 1 ; i--)
		{
			fatorial *= i;
		}
		valor_aproximado += (pow(x, 2 * n + 1) / fatorial);
		erro_abs = fabs(valor_aproximado - valor_real);
		n++;
		printf("%d Interacoes: %.14lf = [( %d^(2*%d+1)/%.0lf )]\n", n, valor_aproximado, x, n, fatorial);

	}
	while ( erro_abs > erro_min_abs );

	printf("\nO valor real de sinh(x)_______: %.14lf\n", valor_real);
	printf("O valor aproximado de cos(x)__: %.14lf\n", valor_aproximado);
	printf("Numero de interacoes__________: %d", n);
	return 0;
}
