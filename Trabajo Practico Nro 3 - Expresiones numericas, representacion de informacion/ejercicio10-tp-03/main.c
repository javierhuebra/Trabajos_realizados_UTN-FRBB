#include <stdio.h>
#include <math.h>

int main(void)
{
    // Asignacion de las variables

    double a;
    double b;
    double c;
    double d;
    double e;
    double f;

    double x;
    double y;

    // Ingreso de los valores de las variables

    printf("Ingrese el valor de 'a':");
    scanf("%lf", &a);
    printf("\n");
    printf("Ingrese el valor de 'b':");
    scanf("%lf", &b);
    printf("\n");
    printf("Ingrese el valor de 'c':");
    scanf("%lf", &c);
    printf("\n");
    printf("Ingrese el valor de 'd':");
    scanf("%lf", &d);
    printf("\n");
    printf("Ingrese el valor de 'e':");
    scanf("%lf", &e);
    printf("\n");
    printf("Ingrese el valor de 'f':");
    scanf("%lf", &f);
    printf("\n");

    // Calculos de las rectas...

    y = (f-((d*c)/a))/(((-d*b)+(e*a))/a);
    x = (c-(b*y))/a;

    printf("El valor de x es %lf \n", x);
    printf("El valor de y es %lf \n", y);

    return 0;
}

