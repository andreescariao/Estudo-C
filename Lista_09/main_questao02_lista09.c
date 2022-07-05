// Aluno: André Karine Escarião de Medeiros
// Matrícula: 119210793
// Questão 2 ; lista 9 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int funcao_R(int N, int k);
int fibonacci(int t);

int main(void)
{
	int elementos, operacoes, resultado;
		printf("digite o numero de elementos(N) do vetor: \n");
		scanf("%d", &elementos);
		
		printf("digite o numero de operacoes(K): \n");
		scanf("%d", &operacoes);
		
		resultado = funcao_R(elementos, operacoes);
		
		printf("resultado R(N,K)= %d\n", resultado);
		
		return 0;		
}



//Funcao R(N,K)
int funcao_R(int N, int k)
{
	int i, n;
	int v[N];
	
	// Vetor de tamanho N
	for (i = 0; i<N; i++)
	{
		v[i] = i;
	}

	
	// Inverter posicoes com Sn e Tn
    int Sn, Tn, Y, soma=0;
    
	for (n=1; n<=k; n++)
	{
		Sn = fibonacci( (2*n)-1 ) %N;
		Tn = fibonacci( 2*n ) %N;
		
		Y = v[Tn];
		v[Tn] = v[Sn];
		v[Sn] = Y;
	}
	
	
	// Somatorio 
	for (i =0; i<N; i++)
	{
		soma += i*v[i];
	}
	
	return soma;
}




// Funcao fibonacci
int fibonacci(int t)
{
	 int anterior=1 , proximo=1 , soma=1, i;

    for(i =2; i < t; i++)
    {
        soma = anterior + proximo;
        anterior = proximo;
        proximo = soma;
    }
    return (soma);
}
