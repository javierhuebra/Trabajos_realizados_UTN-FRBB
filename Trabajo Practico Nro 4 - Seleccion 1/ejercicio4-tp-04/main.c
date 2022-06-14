/* Este es el programa para calcular raices reales
 * de una funcion cuadratica!
 * Jonathan Romulo*******************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double disc;

//  Comienzo del programa

    printf("Ingrese el valor de 'A': ");
    scanf("%lf", &a);
    printf("\n");
    printf("Ingrese el valor de 'B': ");
    scanf("%lf", &b);
    printf("\n");
    printf("Ingrese el valor de 'C': ");
    scanf("%lf", &c);
    printf("\n");

// asignacion

    x1 = (-b + sqrt((b*b)- (4.0*a*c)))/(2.0*a);
    x2 = (-b - sqrt((b*b)- (4.0*a*c)))/(2.0*a);
    disc = (b*b) - (4.0*a*c);

// Condiciones
    if (a == 0.0)
{
    printf("No se puede aplicar la formula \n");
    printf("No se considera funcion cuadratica \n");

    return 0;
}
    if (disc >= 0.0)
{
    printf("El valor de x1 es %lf \n", x1);
    printf("El valor de x2 es %lf \n", x2);
}
    else
{
    printf("No existe raices reales para esta funcion \n");
}
    return 0;
}

