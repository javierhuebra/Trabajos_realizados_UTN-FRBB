#include <stdio.h>

void funcion(double pendiente,double *x, double *y)
{
    if(pendiente>0)     //Condicion para que retorne los valores en el 1er o 2do cuadrante
    {
        *x = sqrt(9.0/(1+(pendiente*pendiente)));
        *y = pendiente * *x;
    }
    else
    {
        *x = -1.0 *(sqrt(9.0/(1+(pendiente*pendiente))));
        *y = pendiente * *x;
    }
}
int main(void)
{
    double pend;
    double x,y;

    printf("Ingrese el valor de la pendiente: ");
    scanf("%lf", &pend);
    printf("\n\n");

    funcion(pend,&x,&y);

    printf("x = %lf\n",x);
    printf("y = %lf\n\n",y);
    printf("P1 (x1 , y1) = (%lf , %lf)\n\n",x,y);

    return 0;
}
