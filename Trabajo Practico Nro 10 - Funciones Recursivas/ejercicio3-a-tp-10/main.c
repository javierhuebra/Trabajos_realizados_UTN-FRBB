#include <stdio.h>

int sumatoria(int n)
{
    if(n==4)
        return 5;

    return ((n+1)+ sumatoria(n-1));
}

int main(void)
{
    int i=0;
    int suma;

    printf(" Ingrese el valor de 'n':   ");
    scanf("%d",&i);
    printf("\n");

    suma = sumatoria(i);
    printf("Valor de la serie para n= %d es  %d\n\n",i,suma);

    return 0;
}

