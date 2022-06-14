#include <stdio.h>
#include <time.h>
#define n 10

void generar_arreglo(int a[n])
{
    int i;
    for(i=0;i<n;i++)
     {
        a[i] = rand()%100;
     }
}
void imprimir_arr(int a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("a[%d] = %d\n",i,a[i]);
     }
    printf("\n\n");
}
int suma_parcial(const int *datos, int *comienzo, int *fin)
{
    int suma=0;
    int i;

    for(i=comienzo;i<=fin;i++)
      {
        suma+=datos[i];
        comienzo++;

      }
    return suma;

}
int main(void)
{
    srand(time(NULL));
    int arr[n];
    int extremo1, extremo2;
    int suma;

    generar_arreglo(arr);
    imprimir_arr(arr);
    printf("Ingrese el extremo superior:");
    scanf("%d",&extremo1);
    printf("\n");
    printf("Ingrese el extremo inferior:");
    scanf("%d",&extremo2);
    printf("\n");
    suma = suma_parcial(arr, extremo1, extremo2);

    printf("Valor de la suma parcial: %d\n\n",suma);

    return 0;
}

