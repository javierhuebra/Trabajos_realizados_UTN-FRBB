#include <stdio.h>
#define n 5

int main(void)
{
    double *ptr;
    int *ptr2;
    char *ptr3;
    int i;

    double arrTemperaturas[n] = {22.08, 32.0, -1.3, 15.09, 0.03};
    int arrfibonacci[n] = {1, 1, 2, 3 ,5};
    char arrCaracteres[n] = {'i', 'n', 'f', 'o', 'I'};

    ptr = arrTemperaturas;
    for(i=0;i<n;i++)
     {
        printf("Contenido del arreglo: %lf \t Direcci\242n: %p\n",*ptr,ptr);
        ptr++;
     }
    printf("\n");

    ptr2 = arrfibonacci;
    for(i=0;i<n;i++)
     {
        printf("Contenido del arreglo: %d \t Direcci\242n: %p\n",*ptr2,ptr2);
        ptr2++;
     }
    printf("\n");

    ptr3 = arrCaracteres;
    for(i=0;i<n;i++)
     {
        printf("Contenido del arreglo: %c \t Direcci\242n: %p\n",*ptr3,ptr3);
        ptr3++;
     }

    return 0;
}

