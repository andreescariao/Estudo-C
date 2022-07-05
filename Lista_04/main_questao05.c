//questao 5 lista 4 aluno: andre escariao 119210793
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char a, o;

    printf("escreva um numero x: \n");
    scanf("%d", &x);

    printf("escreva um numero y: \n");
    scanf("%d", &y);

    a = x*1;
    o = y*1;

    printf("ponto: ( %s , %s )\n", &a,&o);

    if ( 0 == x || y == 0)
        {
        printf("erro\n");
        printf("x e y nao podem ser zero \n");
        }else

    if ( 0 < x && y > 0)
        {
        printf("primeiro quadrante");
        } else

    if ( 0 > x && y > 0)
        {
        printf("segundo quadrante");
        } else

    if ( 0 > x && y < 0)
        {
        printf("terceiro quadrante");
        } else

    if ( 0 < x && y < 0)
        {
        printf("quarto quadrante");
        }
    return 0;
}
