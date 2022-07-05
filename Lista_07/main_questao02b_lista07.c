#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



//calculo da media geometrica

//funcao fatorial
int fat(int n)
{
		int fat=1,i;
	
for ( i=1 ; i<=n ; i++ )	
{
	
	fat = fat*i;
	
}
return (fat);
}



int main(void)
{
			
	//gerar vetor de numeros aleatorios
	int i, X[4];
    int cont, soma=0;
    double U;
    
	for	(i=0;i<=3;i++)
	{
		X[i] = rand ()%3+1;
		if (i% 10 == 0)
			printf("\n");
		printf("   %3d", X[i]);
	}
	printf("\n\n");
		
		
		
float n=5, fatorial;

double mediageometrica, parte2;

for(i=0;i<4;i++)
{	
		fatorial = fat(X[i]);
}




printf("\nfatorial=%.2f\n", fatorial);

	   	parte2= (1/4);
		
		mediageometrica = pow(fatorial, parte2);
		
printf("\nmediageometrica = %.4lf\n", mediageometrica);
		
		

		
		
	system("pause");
	return 0;
}