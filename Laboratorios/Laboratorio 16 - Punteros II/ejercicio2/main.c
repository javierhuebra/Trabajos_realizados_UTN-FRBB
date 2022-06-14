#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 10
void generar_arreglo(int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i] = rand()%100;
    }
}
void imprimir_arr(int a[n], int *punt[n])
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("Puntero[%02d] = %p \t a[%02d] = %02d   Ordenado: %d\n", i, punt[i], i, a[i], *punt[i]);
    }
    printf("\n\n");
}
void ordenar_arreglo(int *punt[n])
{
    int pasada;
    int j;
    int *temp;

    for(pasada=1;pasada<n;pasada++)
    {
        temp = punt[pasada];

        j = pasada-1;
        while((j>=0) && (*temp > *punt[j]))
        {
            punt[j+1] = punt[j];
            j = j-1;
        }
        punt[j+1] = temp;
    }
}
int main(void)
{
    int *ptr[n];
    int arr[n];
    int i;

    generar_arreglo(arr);

    for(i=0;i<n;i++)
        ptr[i] = &arr[i];

    imprimir_arr(arr,ptr);
    ordenar_arreglo(ptr);

    imprimir_arr(arr,ptr);

    return 0;
}

