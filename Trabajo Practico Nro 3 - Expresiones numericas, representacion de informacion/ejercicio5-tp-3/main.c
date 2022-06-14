#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
/* declaracion de las variables de la ecuacion */

    double a, q;
    double Y;

// Ingreso de valores en la consola

    printf("Ingrese el valor de 'a'");
    scanf("%lf", &a);
    printf("\n");
    printf("Ingrese el valor de 'b'");
    scanf("%lf", &q);
    printf("\n");

// Calculo de la ecuacion

    Y = (a*1) + (a*q) +(a*(q*q));

    printf("El valor de Y es %lf \n", Y);

    return 0;
}

