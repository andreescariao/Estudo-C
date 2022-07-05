#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcao para sequencia par
int parapar(int n, int elementos)
{
	int contador=1;
	double sequenciapar;
	
	if (contador == elementos)
	{
		return (1);
	}else{
		
	sequenciapar = (n/2);
	
	return(parapar);
}
}


//funcao para sequencia impar
int paraimpar(int n, int elementos)
{
	int contador=1;
	double sequenciaimpar;
	
	if (contador == elementos)
	{
		return (1);
	}else{
	sequenciaimpar = ( ( n*3 ) +1);
	
	return(paraimpar);
	}
}





int main()
{
	//saber se e par ou impar
	int n, poui, elementos;
	double sequencia;
	
	
	
	printf("digite um numero: ");
	scanf("%d", &n);
	
	poui = n % 2;
	
	//apg
	printf("\n OBS: certificar valor: %d \n", poui);
	
	
	printf("digite o numero de elementos: \n");
	scanf("%d", &elementos);
	
	//impar
	if(poui == 0)
	{
		
		sequencia = parapar(n, elementos);
		printf("sequencia: %d\n", sequencia);  
		
	}else{
		  
		sequencia = paraimpar(n, elementos);
		printf("sequencia: %d\n", sequencia);
		
	}

	system("pause");

	return 0;

}