#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main(){
	int m=0,k,n;
	double Xk,Yk,z,pi;
	srand(time(NULL));
	printf("Informe o numero de pares sorteados: ");
	scanf("%d",&n);
	for( k=0; k < n ; k++ ){
		Xk = (double)(rand()%10001) / 10000;// Sorteia números dentro do intervalo [0,1] com precisão de 4 casas decimais.
		Yk = (double)(rand()%10001) / 10000;// Sorteia números dentro do intervalo [0,1] com precisão de 4 casas decimais.
		printf("(X,Y) = (%lf,%lf)\n",Xk,Yk);
		z = pow(Xk,2) + pow(Yk,2); 
		if(z <= 1){
			m++;
		}	
	}
	pi=(double)4*m/n;
	printf("O valor aproximado de pi eh %.6lf",pi);
	return 0;
}