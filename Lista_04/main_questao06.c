//questao 6 lista 4 aluno: andre escariao 119210793
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sexo, idade, peso, febre, dsangue, gravida, amamentando;


    printf("informe a idade do doador: \n");
    scanf("%d", &idade);


    if ( idade < 60)
    {
    printf("\n");
    }else
        if ( idade >= 60 )
    {
    printf("o paciente ja doou sangue alguma vez? (se sim: digite1, se nao: digite 2) \n ");
    scanf("%d", &dsangue);
    }

    if (idade >= 60 && dsangue == 1)
        {
        printf("\n");
        }else if ( idade >=60 && dsangue == 2)
        {
            printf("nao pode doar");
        }
        printf("pode doar \n");
    }else{
        printf("nao pode doar \n");
    }


    printf("o paciente tem febre no dia da doacao? (se sim: digite1 , se nao: digite2) \n");
    scanf("%d", &febre);

    if(febre == 1)
    {
        printf("nao pode doar \n");
    }else if (febre == 2)
    {
        printf("\n");
    }

    printf("informe o peso do doador: \n");
    scanf("%d", &peso);

    printf("informe o sexo do doador: (digite 1 para masculino ou 2 para feminino) \n");
    scanf("%d", &sexo);


    if (sexo == 1 && peso >= 60)
    {
       printf("pode doar \n");
    }else{
     printf("nao pode doar \n");
     }




    if (sexo == 2 && peso >= 50)
        {
        printf("a doadora esta gravida? (se sim: digite1 , se nao: digite 2) \n");
        scanf("%d", &gravida);
        }else{
            printf("nao pode doar \n");
        }

    if(sexo == 2 && gravida == 1)
        {
        printf("a quanto tempo vem amamentando? \n");
        scanf("%d", &amamentando);
        }else{
        printf("pode doar \n");
        }

    if (sexo == 2 && amamentando < 12)
        {
        printf("a gestante nao pode doar devido ao periodo de amamentacao");
        }else{
        printf("pode doar \n");
        }




    return 0;
}
