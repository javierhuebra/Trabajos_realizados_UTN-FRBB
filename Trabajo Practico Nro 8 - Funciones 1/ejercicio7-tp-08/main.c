#include <stdio.h>

double tiempo (double v1, double v2);
double velocidad_relativa (double v1, double v2);
double distancia (double v2);
double v1;
double v2;
double yt;
double yv;
double yd;

double tiempo (double v1, double v2)
{
    double tiempo;
    tiempo =  (300.0-0.0)/( v1 + v2);
    return tiempo;
}

double velocidad_relativa(double v1, double v2)
{
    return v1+v2;
}

double distancia (double v2)
{
    double dist;
    dist = 300.0 - v2 * tiempo(v1,v2);
    return dist;
}

int main(void)
{
    printf("Ingrese el valor de V1:  ");    scanf("%lf", &v1);
    printf("\n\n");
    printf("Ingrese el valor de V2:  ");    scanf("%lf", &v2);
    printf("\n\n");

    yt = tiempo(v1,v2);
    yv = velocidad_relativa(v1,v2);
    yd = distancia(v2);


    printf("Tiempo Transcurrido:    %lf horas\n\n", yt);
    printf("Velocidad Relativa:    %lf Km/h \n\n", yv);
    printf("Distancia de A:    %lf Km \n\n", yd);

    return 0;
}

