#include <stdio.h>

const double G = 6.673e-8;
double m1=0;
double m2=0;
double d=0;

double FuerzaDeGrav ( double m1, double m2, double d)
{
    double f;

    f = (G * m1 * m2)/(d*d);

    return f;
}

int main(void)
{
    printf(" Ingrese el valor de la Masa 1 en gramos:  ");    scanf("%lf", &m1);
    printf("\n\n");
    printf(" Ingrese el valor de la Masa 2 en gramos:  ");    scanf("%lf", &m2);
    printf("\n\n");
    printf(" Ingrese el valor de la Distancia en Centimetros:  ");    scanf("%lf", &d);
    printf("\n\n");

    printf(" Fuerza Gravitacional =  %.10lf dinas\n\n", FuerzaDeGrav(m1,m2,d));

    return 0;
}

