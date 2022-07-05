// questao 2 lista 4 ( capicua ) aluno: andre escariao 119210793
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero1, numero2, numero3, cifra1, cifra2, cifra3 ;


    printf ("digite um numero inteiro:\n");
    scanf("%d", &numero1);


    //para numeros de 1 digito

        if (1<= numero1 && numero1 <= 9)
        {
            printf("Eh capicua");
        }

     //para numeros de 2 digitos
        if (10 <= numero1 && numero1 <= 99)
        {
            cifra1 = numero1 %10;
            printf("%d", cifra1);

            cifra2 = numero1 / 10 ;
            printf("%d", cifra2);

            if (cifra1 == cifra2)
            {
                printf("\n");
                printf("Eh Capicua");
            }
            else
            {
                printf("\n");
                printf("Nao eh Capicua");
            }
        }


    //para numeros de 3 digitos
        if ( 100<= numero1 && numero1 <= 999){

       cifra1 = numero1 %10 ;
       printf("%d", cifra1);
       numero2 = numero1 /10 ;

       cifra2 = numero2 %10 ;
       printf ("%d", cifra2);
       numero3 = numero2 /10 ;

       cifra3 = numero3 %10 ;
       printf("%d", cifra3);

        if (cifra1 == cifra3)
        {
            printf("\n");
            printf("Eh Capicua");

        }
        else
        {
            printf("\n");
            printf("Nao eh Capicua");
        }



        return 0;

}
}

