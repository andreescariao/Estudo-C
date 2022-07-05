/*  NADHIA RODRIGUES DA SILVA    119210923    QUESTAO 1*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

void menu();
float** alocar_matriz(int num_lin, int num_col);
void matriz_rand(float **m, int num_lin, int num_col);
void exibe_matriz(float **m, int num_lin, int num_col);
//1-a
float Erro_Medio_Absoluto(float **F, float **G, int num_lin, int num_col);
//1-b
float Erro_Medio_Quadratico(float **F, float **G, int num_lin, int num_col);
//1-c
float Erro_Medio_Quadratico_Absoluto(float **F, float **G, int num_lin, int num_col);
//1-d
void Media(float **F, float **G, int num_lin, int num_col,float *uF,float *uG);
//1-e
void Variancia(float **F, float **G,float uF,float uG, int num_lin, int num_col,float *oF,float *oG);
//1-f
float Covariancia(float **F, float **G,float uF,float uG, int num_lin, int num_col);
//1-g
float Coeficiente_de_Correlacao(float **F, float **G,float uF,float uG, int num_lin, int num_col);

int main()
{
	setlocale(LC_ALL,"");
	int num_lin, num_col;
	float **F, **G;
	printf("Digite o numero de num_lin da matriz: ");
	scanf("%d", &num_lin);
	printf("Digite o numero de num_col da matriz: ");
	scanf("%d", &num_col);

	F = alocar_matriz(num_lin, num_col);
	G = alocar_matriz(num_lin, num_col);

	matriz_rand(F, num_lin, num_col);
	matriz_rand(G, num_lin, num_col);

	printf("\nMatriz F:\n");
	exibe_matriz(F, num_lin, num_col);
	printf("\nMatriz G:\n");
	exibe_matriz(G, num_lin, num_col);
	
	//printf("\n\nErro Medio Absoluto = %.2f", Erro_Medio_Absoluto(F, G, num_lin, num_col));

	//printf("\nErro Medio Quadratico = %.2f", Erro_Medio_Quadratico(F, G, num_lin, num_col));
	
	//printf("\nErro Medio Quadratico Absoluto = %.2f", Erro_Medio_Quadratico_Absoluto(F, G, num_lin, num_col));

	float uF,uG;
	Media(F,G,num_lin,num_col,&uF,&uG);
	//printf("\nMedia:");
	//printf("\nuF = %.2f",uF);
	//printf("\nuG = %.2f",uG);
	
	float oF,oG;
	Variancia(F,G,uF,uG,num_lin,num_col,&oF,&oG);
	//printf("\nVariancia:");
	//printf("\noF = %.2f",oF);
	//printf("\noG = %.2f",oG);	
	
	//printf("\nCovariancia =  %.2f",Covariancia(F,G,uF,uG,num_lin,num_col));
	//printf("\nCoeficiente de Correlacao =  %.2f",Coeficiente_de_Correlacao(F,G,uF,uG,num_lin,num_col));
	printf("|------------------------------------------------------------------------------------|");
	printf("\n> Questão 01:\n");
	printf("\n\ta)Erro Médio Absoluto.\n\tResposta: %f", Erro_Medio_Absoluto(F, G, num_lin, num_col));
	printf("\n\tb)Erro Médio Quadrático.\n\tResposta: %f", Erro_Medio_Quadratico(F, G, num_lin, num_col));
	printf("\n\tc)Erro Médio Quadrático Normalizado.\n\tResposta: %f", Erro_Medio_Quadratico_Absoluto(F, G, num_lin, num_col));
	printf("\n\td)Média.\n\tResposta: uF = %f | uG = %f",uF,uG);
	printf("\n\te)Variância.\n\tResposta: oF = %f | oG = %f",oF,oG);
	printf("\n\tf)Covariância.\n\tResposta: %f",Covariancia(F,G,uF,uG,num_lin,num_col));
	printf("\n\tg)Coeficiente de Correlação.\n\tResposta: %f",Coeficiente_de_Correlacao(F,G,uF,uG,num_lin,num_col));
	printf("\n|------------------------------------------------------------------------------------|\n\n");
	return 0;
}

float** alocar_matriz(int num_lin, int num_col)
{
	int i, j;
	//Variáveis Auxiliares
	float **m = (float**)malloc(num_lin * sizeof(float*));
	//Aloca um Vetor de Ponteiros
	for (i = 0; i < num_lin; i++)  //Percorre as num_lin do Vetor de Ponteiros
	{
		m[i] = (float*)malloc(num_col * sizeof(float)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
		for (j = 0; j < num_col; j++)  //Percorre o Vetor de Inteiros atual.
		{
			m[i][j] = 0; //Inicializa com 0.
		}
	}
	return m; //Retorna o Ponteiro para a Matriz Alocada
}

void matriz_rand(float **m, int num_lin, int num_col)
{
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			m[i][j] = ((float)(rand() % 10001))/100 ;
		}
	}
}

void exibe_matriz(float **m, int num_lin, int num_col)
{
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		printf("|");
		for(j = 0; j < num_col; j++)
		{
			printf("%3.2f ",m[i][j]);
		}
		printf("|\n");
	}
}

float Erro_Medio_Absoluto(float **F, float **G, int num_lin, int num_col)
{
	float EMA = 0;
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			EMA += fabs(F[i][j] - G[i][j]);
		}
	}
	EMA = EMA / (num_lin * num_col);
	return EMA;
}

float Erro_Medio_Quadratico(float **F, float **G, int num_lin, int num_col)
{
	float EMQ = 0;
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			EMQ += pow((F[i][j] - G[i][j]),2);
		}
	}
	EMQ = EMQ / (num_lin * num_col);
	return EMQ;
}

float Erro_Medio_Quadratico_Absoluto(float **F, float **G, int num_lin, int num_col)
{
	float numerador=0,denominador=0,EMQA;
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			numerador += pow((F[i][j] - G[i][j]),2);
			denominador += pow(F[i][j],2);
		}
	}
	EMQA = numerador / denominador;
	return EMQA;
}

void Media(float **F, float **G, int num_lin, int num_col,float *uF,float *uG)
{
	*uF = 0;
	*uG = 0;   	
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			*uF += F[i][j];
			*uG += G[i][j];
		}
	}
	*uF /= (num_lin*num_col);
	*uG /= (num_lin*num_col);
}

void Variancia(float **F, float **G,float uF,float uG, int num_lin, int num_col,float *oF,float *oG)
{
	*oF = 0;
	*oG = 0;   	
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			*oF += pow(F[i][j]-uF,2);
			*oG += pow(G[i][j]-uG,2);
		}
	}
	*oF /= (num_lin*num_col);
	*oG /= (num_lin*num_col);
}

float Covariancia(float **F, float **G,float uF,float uG, int num_lin, int num_col)
{
	float oFG = 0;
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			oFG += ( (F[i][j]-uF) * (G[i][j]-uG) );
			//printf("\n(%f - %f) * (%f - %f) = %f",F[i][j],uF,G[i][j],uG,( (F[i][j]-uF) * (G[i][j]-uG) ));
		}
	}
	oFG = oFG / (num_lin * num_col);
	return oFG;
}


float Coeficiente_de_Correlacao(float **F, float **G,float uF,float uG, int num_lin, int num_col)
{
	float numerador=0,denominador=0,r;
	int i, j;
	for(i = 0; i < num_lin; i++)
	{
		for(j = 0; j < num_col; j++)
		{
			numerador += ( (F[i][j]-uF) * (G[i][j]-uG) );
			denominador += ( (pow( (F[i][j]-uF) ,2) ) * (pow( (G[i][j]-uG) ,2) ) );
			//printf("\nNumerador: (%.0f - %.0f) * (%.0f - %.0f) = %.0f",F[i][j],uF,G[i][j],uG,( (F[i][j]-uF) * (G[i][j]-uG) ));
			//printf("\nDenominador: (%.0f - %.0f)^2 * (%.0f - %.0f)^2 = %.0f",F[i][j],uF,G[i][j],uG,( (pow( (F[i][j]-uF) ,2) ) * (pow( (G[i][j]-uG) ,2) ) ));
		}
	}
	//printf("\n%f / %f\n",numerador,sqrt(denominador));
	r = numerador / sqrt(denominador);
	return r;
}
