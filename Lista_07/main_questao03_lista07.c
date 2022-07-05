//Aluno: André Escarião Matrícula: 119210793
//Questão 3 Lista 7. Quadrado Mágico em C utilizando Funções

#include <stdio.h>
 
void lerMatriz(int tam, int mat[tam][tam]) {
	int i, j;
	for (i = 0; i < tam; i++) {
		for (j = 0; j < tam; j++) {
			scanf("%i", &mat[i][j]);
		}
	}
}
 
void mostraMatriz(int tam, int mat[tam][tam]) {
	int i, j;
	for (i = 0; i < tam; i++) {
		for (j = 0; j < tam; j++) {
			printf("%i ", mat[i][j]);
		}
		printf("\n");
	}
}
 
int somaDiagonalPrincipal(int tam, int mat[tam][tam]) {
	int i, soma = 0;
	for (i = 0; i < tam; i++) {
		soma += mat[i][i];
	}
	return soma;
}
 
int somaDiagonalSecundaria(int tam, int mat[tam][tam]) {
	int i, soma = 0;
	for (i = 0; i < tam; i++) {
		soma += mat[i][tam-i-1];
	}
	return soma;
}
 
void mostraVetor(int vet[], int tam) {
	int i;
	for (i = 0; i < tam; i++) {
		printf("%i ", vet[i]);
	}
}
 
void somaLinhas(int tam, int mat[tam][tam], int vet[]) {
	int i, j;
	for (i = 0; i < tam; i++) {
		vet[i] = 0;
		for (j = 0; j < tam; j++) {
			vet[i] += mat[i][j];
		}
	}
}
 
void somaColunas(int tam, int mat[tam][tam], int vet[]) {
	int i, j;
	for (j = 0; j < tam; j++) {
		vet[j] = 0;
		for (i = 0; i < tam; i++) {
			vet[j] += mat[i][j];
		}
	}
}
 
int testaIgualidadeVetor(int vet[], int tam) {
	int i;
	for (i = 1; i <  tam; i++) {
		if (vet[i] != vet[i-1]) {
			return 0;
		}
	}
	return 1;
}
 
int main(void) {
	int n;
	
	scanf("%i", &n);
	int mat[n][n];
	
	lerMatriz(n, mat);
	mostraMatriz(n, mat);
	
	int somaDP = 0, somaDS = 0;
	somaDP = somaDiagonalPrincipal(n,mat);  //soma da diagonal principal
	somaDS = somaDiagonalSecundaria(n,mat); //soma da diagonal secundaria
 
	//soma linhas
	int vetL[n];
	somaLinhas(n, mat, vetL);
	printf("\nSoma das linhas: ");
	mostraVetor(vetL, n);
 
	//soma colunas
	int vetC[n];
	somaColunas(n, mat, vetC);
	printf("\nSoma das colunas: ");
	mostraVetor(vetC, n);
	
	printf("\nSoma diagonal principal %i e secundaria %i\n", somaDP, somaDS);
 
	int testaL, testaC;
	testaL = testaIgualidadeVetor(vetL, n);
	testaC = testaIgualidadeVetor(vetC, n);
 
	if (testaL && testaC && somaDP == somaDS && somaDP == vetL[0]) {
		printf("Quadrado magico");
	} else {
		printf("Nao eh Quadrado magico");
	}
 
	return 0;
}
