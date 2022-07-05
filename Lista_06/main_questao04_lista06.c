// Gabarito - Questão 04:
#include <stdio.h>
#include <math.h>

int main()
{
	double valor_aproximado = 0, valor_real, fatorial, erro_min_abs, erro_abs;
	int x, i, num_interacoes = 0, incremento = 0, sinal = 1;

	printf("Informe o valor de x__________: ");
	scanf("%d", &x);
	printf("Informe o erro minimo absoluto: ");
	scanf("%lf", &erro_min_abs);
	valor_real = cos(x);

	do
	{
		for(fatorial = 1, i = incremento; i >= 1 ; i--)
		{
			fatorial *= i;
		}
		valor_aproximado += (pow(x, incremento) / fatorial) * sinal;
		erro_abs = fabs(valor_aproximado - valor_real);

		num_interacoes++;
		printf("%d Interacoes: %lf = [( %d^(%d)/%.0lf ) * %d ]\n", num_interacoes, valor_aproximado, x, incremento, fatorial, sinal);

		sinal *= -1;
		incremento += 2;
	}
	while ( erro_abs > erro_min_abs );

	printf("\nO valor real de cos(x)________: %.14lf\n", valor_real);
	printf("O valor aproximado de cos(x)__: %.14lf\n", valor_aproximado);
	printf("Numero de interacoes__________: %d", num_interacoes);
	return 0;
}
