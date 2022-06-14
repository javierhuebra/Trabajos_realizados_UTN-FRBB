#include <stdio.h>
#include <time.h>
#define n 5

ordenar_arreglo_seleccion(double a[n])
{
    int i, j, posMin;
    double temp;

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(a[j] > a[posMin])
              posMin = j;
       }
      temp = a[posMin];
      a[posMin] = a[i];
      a[i] = temp;
     }
}
void generar_arreglo(double a[n])
{
    int i;
    for(i=0;i<n;i++)
     {
        a[i] = rand()%50/sqrt(2);
     }
}
void imprimir_arr(double a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("legajo[%d] = %lf\n",i,a[i]);
     }
    printf("\n\n");

}
int main(void)
{
        srand(time(NULL));
        double arr[n];

        generar_arreglo(arr);
        imprimir_arr(arr);
        ordenar_arreglo_seleccion(arr);
        imprimir_arr(arr);

        return 0;
}

