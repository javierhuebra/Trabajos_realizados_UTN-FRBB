#include <stdio.h>

void ordenar(int *x,int *y,int *z)
{
    int temp=0;

    if(*z<*y)
    {
        temp = *z;
        *z = *y;
        *y = temp;
    }
    if(*z<*x)
    {
        temp = *z;
        *z = *x;
        *x = temp;
    }
    if(*y<*x)
    {
        temp = *y;
        *y = *x;
        *x = temp;
    }
}
    int main(void)
    {
        int nro1;
        int nro2;
        int nro3;

        printf("Ingrese el 1er Nro:");
        scanf("%d",&nro1);
        printf("\n");
        printf("Ingrese el 2er Nro:");
        scanf("%d",&nro2);
        printf("\n");
        printf("Ingrese el 3er Nro:");
        scanf("%d",&nro3);
        printf("\n");

        ordenar(&nro1,&nro2,&nro3);

        printf("Valores ordenados: %d - %d - %d\n",nro1,nro2,nro3);

        return 0;
    }

