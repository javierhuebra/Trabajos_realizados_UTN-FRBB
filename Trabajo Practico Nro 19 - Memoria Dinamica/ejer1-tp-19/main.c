#include <stdio.h>

int main(void)
{
    int* pEnt;
    double* pRac;

    pEnt = (int *) malloc(sizeof(int));
    pRac = (double *) malloc(sizeof(double));

    printf("Ingrese valor entero:");
    scanf("%d",pEnt);
    printf("\n");
    printf("Ingrese valor de punto flotante:");
    scanf("%lf",pRac);
    printf("\n\n");

    *pRac = *pEnt * *pRac;

    printf("Resultado: %lf\n\n",*pRac);

    free(pEnt);
    free(pRac);

    pRac = NULL;

    printf("Resultado: %lf\n\n",*pRac);
    return 0;
}

