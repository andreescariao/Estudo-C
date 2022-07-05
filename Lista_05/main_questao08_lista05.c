#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    double a=1,b,x,n;
    int i=1, fa=1;

    printf("digite x:");
    scanf("%lf", &x);

    printf("digite n:");
    scanf("%lf", &n);

    for(i=1;i<=n;i++){

        fa = 1;

        for (int j=1; j<=i;j++){

            fa =j*fa;

            for(int j=1; j<=1; j++)
            {
                fa=j*fa;
                printf("%d \n", fa);

            }
            a = a+ ((float)pow(x,i))/((float)fa);

        }

        printf("%.12f \n", a);
    }
    return 0;
}
