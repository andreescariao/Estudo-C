#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int f50(int n )
{
	int naturais=1;
	if ( n <=49 )
	{
		   naturais = naturais* f50(n+1);
		   
		   	return (naturais);
		   	
	}else{
		
		 	return 1;	
	}

	
}

int main()
{

	int n=1; 
	double sequencia;
	
	
	sequencia = f50(n);

	printf("50 primeiros numeros naturais: %lf \n", sequencia);	

		
return 0;
}
		