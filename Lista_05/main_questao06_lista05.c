#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    double xj=1,s,B;

    srand (time(NULL));
    scanf("%lf", &B);

    for (i=1;xj<=B;i++)
    {
        s=(double)(rand()%100)\100 ;
        xj = xj + s;
    }
    printf("%lf%d\n", xj, i );

    return 0;
}
