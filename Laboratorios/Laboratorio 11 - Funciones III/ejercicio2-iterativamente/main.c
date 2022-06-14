#include <stdio.h>

int i=1;
int n=0;
double suma;

int main(void)
{
    printf(" Ingrese el valor de n:  ");
    scanf("%d", &n);
    printf("\n\n");

    for(i=1; i<=n; i++)
     {
        suma = suma +(3.0*i)/(i+1);
     }

    printf(" El valor de la suma con n = %d es   %lf \n\n",n, suma);

    return 0;
}

