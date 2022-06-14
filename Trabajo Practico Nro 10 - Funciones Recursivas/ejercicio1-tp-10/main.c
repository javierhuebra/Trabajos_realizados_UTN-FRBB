#include <stdio.h>

int funcionDiv2(int n)
{
    static int div=0;
    if(n==0)
        return div;

    div++;
    n=n/2;
    printf("%d \n",n);
    funcionDiv2(n);
}

int main(void)
{
    int x=0;
    int resultado=0;

    printf("Ingrese un numero entero:   ");
    scanf("%d",&x);
    printf("\n");

    resultado = funcionDiv2(x);
    printf("\n");
    printf("El numero %d se divide %d veces por dos\n",x,resultado);
    return 0;
}

