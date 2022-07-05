//questao 3 lista 4 aluno: andre escariao 119210793
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3;

    printf("escreva o valor do angulo1: \n");
    scanf("%d", &a1);
    printf("escreva o valor do angulo2: \n");
    scanf("%d", &a2);
    printf("escreva o valor do angulo3: \n");
    scanf("%d", &a3);

//condicao de existencia
if (a1 + a2 + a3 == 180)
{

    if (a1 + a2 + a3 == 180 && a1 == a2 && a1== a3)
{
        printf ("triangulo equilatero \n");



}else if (a1 + a2 + a3 == 180 && a1 == a2 && a1 == a3 || a2 == a1 && a2 == a3 || a3 == a1 && a3 == a2)
    {
        printf ("triangulo isoceles \n");



    }else if (a1 + a2 + a3 == 180 && a1 != a2 != a3 && a1 != a3)
    {
        printf("triangulo escaleno \n");



    }else if (a1 + a2 + a3 == 180 && a1 == 90 || a2 == 90 || a3 == 90)
    {
        printf ("triangulo retangulo \n");

    }


}else{
        printf("triangulo nao existe\n");
}
    return 0;
}
