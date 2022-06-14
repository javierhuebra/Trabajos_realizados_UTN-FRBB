/* Este es el programa de como calcular los puntos p1 y p2
 * que conforman un triangulo dentro de una circunferencia
 * de radio R
 * Jonathan Romulo */

#include <stdio.h>
#include <math.h>


int main(void)
{
// Declaracion de variables
    double radio;
    const double p0y = 0.0;
    double p0x;
    double p1x;
    double p1y;
    double p2x;
    double p2y;

// Comienzo del programa!

    printf("Ingrese el valor del radio de la circunferencia: ");
    scanf("%lf", &radio);
    printf("\n");

// Operaciones numericas del programa

    p1x = radio * (-0.5);
    p1y = radio * ((sqrt(3))/2.0);
    p2x = radio * (-0.5);
    p2y = radio * ((-sqrt(3))/2.0);

// Impresion de los valores de p1 y p2!

    printf("El valor de p1 es p1=( %lf, %lf)\n", p1x, p1y);
    printf("El valor de p2 puede ser p2=( %lf, %lf)\n \n", p2x, p2y);

    return 0;
}

