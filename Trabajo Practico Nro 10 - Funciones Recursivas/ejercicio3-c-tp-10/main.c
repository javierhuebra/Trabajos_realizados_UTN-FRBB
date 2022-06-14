#include <stdio.h>
#include <math.h>

double sumatoria(int n)
{
    double y;
    if(n==0)
        return 0;

    y = sin(2.0*n)*cos(3.0*n)+ sumatoria(n-1);
    return y;
}

int main(void)
{
    int i=0;
    double suma=0;

    printf(" Ingrese el valor de 'n':  ");
    scanf("%d",&i);
    printf("\n");

    suma = sumatoria(i);
    printf(" Valor de la serie para n= %d es  %lf\n\n",i,suma);
    
    return 0;
}

