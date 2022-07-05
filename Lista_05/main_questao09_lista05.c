// Gabarito - Questão 09:
#include <stdio.h>
#include <math.h>

int main()
{
	double produtorio = 1;
	int m,n;

	printf("Informe o valor de m____: ");
	scanf("%d", &m);

	for(n = 1 ; n <= m; n++){
		
		produtorio *= pow(2*n, 2) / (pow(2*n, 2) - 1);
		
		printf("\n%d Interacao: %lf = [( (2*%d)^(2)/(2*%d)^(2) - 1 )]", n, produtorio, n, n);
	}

	printf("\nO valor do produtorio eh: %.14lf\n", 2*produtorio);
	return 0;
}
