//questao 4 lista 4 aluno: andre escariao 119210793
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float quadrado, raiz;

    printf("digite o numero 1: \n");
    scanf("%d", &n1);

    printf("digite o numero 2: \n");
    scanf("%d", &n2);

    if(n1 < n2)
    {
        quadrado = pow(n1,2);
        raiz = sqrt(n2);
        printf("quadrado de n1 para n1 menor que n2 eh: %f\n", quadrado);
        printf("raiz de n2 para n2 maior que n1 eh: %f\n", raiz);
    }else{

        quadrado = pow(n2,2);
        raiz = sqrt(n1);
        printf("quadrado de n2 para n2 menor que n1 eh: %f\n", quadrado);
        printf("raiz de n1 para n1 maior que n2 eh: %f\n", raiz);

    }

    return 0;
}
