#include <stdio.h>

double sumatoria (int n)
{
    if(n==1)
    return 1.5;
    return (3.0*n)/(n+1)+sumatoria(n-1);
}

int main(void)
{
    int n=0;
    double suma;

    printf(" Ingrese el valor de n:  ");
    scanf("%d", &n);
    printf("\n\n");

    suma = sumatoria(n);

    printf(" El valor de la suma con n= %d es   %lf \n\n",n, suma);
    return 0;
}

