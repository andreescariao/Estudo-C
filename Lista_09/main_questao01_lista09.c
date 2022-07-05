// Aluno: André Karine Escarião de Medeiros
// Matrícula: 119210793
// Questão 1 ; lista 9
// Programa que calcula maior soma de números primos no intervalo [1,1000]

#include <stdio.h>

int primo (int n);

int main(void)
{

int i, res, v[1000], soma=0;

for (i=0; i<1000; i++)
{
v[i] = primo(i+1);
}

for (i=0; i<1000; i++)
{
soma += v[i];
if (primo(soma) !=0 && soma <1000)
{
	res =soma;
}
}

printf("maior soma de 1 a 1000: %d \n", res);
return 0;
}

//funcao que retorna todos os primos de 1 a 1000
int primo (int n)
{

int i, cont =0;

for (i=1; i<=n ; i++)
{

if (n%i ==0 )
cont++;

}

if (cont ==2)
{
return (n);
}else{
return 0;
}
}