#include <stdio.h>

double sumatoria(int n)
{
    if(n==-5)
        return -0.5;

    return (((3.0*n)+1.0)/((n*n)+3.0)) + sumatoria(n-1);

}

int main(void)
{
    int i=0;
    double suma;

    printf(" Ingrese el valor de 'n':   ");
    scanf("%d",&i);
    printf("\n");

    suma = sumatoria(i);
    printf("Valor de la serie para n= %d es  %lf\n\n",i,suma);

    return 0;
}
