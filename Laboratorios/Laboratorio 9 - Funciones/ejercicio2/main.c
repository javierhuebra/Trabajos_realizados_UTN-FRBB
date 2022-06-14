#include <stdio.h>

double x=0;
double y=0;

double mediaArmonica( double x, double y)
{
    double M;

    M = (2.0 * x * y)/(x + y);

    return M;
}

int main(void)
{
    printf(" Ingrese el valor de x:  ");    scanf("%lf", &x);
    printf("\n\n");
    printf(" Ingrese el valor de y:  ");    scanf("%lf", &y);
    printf("\n\n");
    printf("Media Arm\242nica = %lf \n\n", mediaArmonica(x,y));

    return 0;
}

