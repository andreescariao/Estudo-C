// Gabarito - Questão 07:
#include <stdio.h>

int main()
{
	double h=0;
	int n,i;
	printf("Informe o valor de n: ");
	scanf("%d", &n);
	//printf("%.0lf",h);
	for(i = 1; i <= n ; i++)
	{
		h += (double) 1 / i;
		//printf(" + 1/%d",i);
	}
	printf("\nValor de h calculado: %.14lf", h);
	return 0;
}
