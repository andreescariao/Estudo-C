#include <stdio.h>

int main(void)
{
    int contador;

    for (contador = 1; contador <= 10; contador++)
    {
       if ( contador == 5)
       {
           continue;
       }
    printf("%d\n, contador");
    }



    return 0;
}
