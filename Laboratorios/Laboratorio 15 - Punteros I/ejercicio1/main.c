#include <stdio.h>

int main(void)
{
    double x = 3.141592654;
    double *xptr;
    xptr = &x;

    printf("Contenido de la variable X: %lf \n",*xptr);
    printf("Contenido del puntero: %p \n",xptr);
    printf("Direcci\242n de la variable: %p \n",xptr);
    printf("Valor de la variable usando indirecci\242n: %lf \n",*xptr);
    printf("Direcci\242n del puntero: %p \n",&xptr);

    return 0;
}

