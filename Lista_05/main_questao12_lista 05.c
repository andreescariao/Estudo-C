// Gabarito - Questão 12:
#include <stdio.h>
#include <math.h>

int main(){
	double In;
	int n,m;
	printf("Informe o valor de m: ");
	scanf("%d",&m);
	
	for(n=0; n <=m ; n++){
		if(n == 0){
			   In = (M_E - 1)/M_E;	   	
		}else{
			   In = 1-((n+1)*In);	
		}
	}
	printf("O valor de In eh: %lf",In);
	return 0;
}