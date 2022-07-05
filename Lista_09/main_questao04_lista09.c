// Aluno: André Karine Escarião de Medeiros
// Matrícula: 119210793
// Questão 4 ; lista 9
// Programa com funcao que calcula proximo primo com base em: a(1) = proxprimo(20)
// e calcula o fibonacci do proximo primo

#include <stdio.h>
#include <math.h>

int fibonacci(int n);
int ehprimo(int n);
int prox_primo(int n);
int a(int n);


int main(void)
{
int n;
printf("digite um numero: \n");
scanf("%d", &n);

int an = a(n);
printf("\na(%d) = %d\n", n, an);

int fb;
fb = fibonacci(an);
printf("\nf(%d) = %d\n",an, fb);

return 0;
}

// Funcao pra saber se e primo
int ehprimo (int n)
{
int i, cont =0;

for (i=1; i<=n ; i++)
{
if (n%i ==0 )
cont++;
}

if (cont ==2) return (1);
else return 0;
}

// Funcao proximo primo
int prox_primo(int n)
{
	int proximo = n +1 ;
	
	while (ehprimo(proximo) == 0)
	{
		proximo++;
	}
	return proximo;
}

// funcao a(n)
int a(n)
{
	if (n==1)
	return ( prox_primo(20) );
else
{
	return prox_primo(a(n-1));
}
}

// funcao f(b) com fibonacci comecando em 1

int fibonacci(int n)
{
	 int ant = 0, prox = 1, soma, i;

    for(i =1; i < n; i++)
    {
        soma = ant + prox;
        ant = prox;
        prox = soma;
    }

    return soma;
}
