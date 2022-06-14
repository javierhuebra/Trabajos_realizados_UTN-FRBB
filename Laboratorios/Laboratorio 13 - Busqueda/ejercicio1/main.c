#include <stdio.h>
#include <time.h>
#define n 20

void imprimir_arr(int a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("a[%d] = %d\n",i,a[i]);
     }
    printf("\n\n");

}
int busqueda(int key, int a[n])
{
    int i;
    for (i=0;i<n;i++)
     {
        if(a[i]==key)
            return i;
     }
    return -1;
}
int leer_clave()
{
    int clave;
    printf(" Ingrese el valor de la clave:   ");
    scanf("%d",&clave);
    printf("\n\n");
    return clave;
}
void imprimir_resultado(int clave, int pos)
{
    if(pos < 0)
        printf("Valor %d no encontrado\n",clave);
    else
        printf("Valor %d encontrado en la posicion %d\n",clave,pos);
}

int main(void)
{
    srand(time(NULL));
    int a[n];
    int clave;
    int i;
    int res;

    for (i=0;i<n;i++)
     {
        a[i]= rand()% 100;
     }

    imprimir_arr(a);
    clave = leer_clave();
    res = busqueda(clave,a);
    imprimir_resultado(clave, res);

    return 0;
}

