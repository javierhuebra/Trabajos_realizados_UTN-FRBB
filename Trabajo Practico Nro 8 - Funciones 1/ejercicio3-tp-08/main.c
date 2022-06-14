#include <stdio.h>

double y;
double x;
double funcion (double x);

double funcion(double x)
{
    return 3*(x*x*x)-2*(x*x)+4*x-3;
}

int main(void)
{
    printf("Ingrese el valor de \"x\" :  ");
    scanf("%lf", &x);
    printf("\n\n");

    y = funcion(x);

    printf("    X:  %lf \n\n", x);
    printf("    F(x) =  %lf \n\n \a", y);

    return 0;
}
