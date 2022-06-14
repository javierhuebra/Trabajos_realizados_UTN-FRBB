#include <stdio.h>
#define n 5

void ordenar_por_promedio(double a[n], int b[n])
{
    int i, j, posMin, temp;
    double tempd;

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(a[j] > a[posMin])
              posMin = j;
       }
      tempd = a[posMin];
      a[posMin] = a[i];
      a[i] = tempd;

      temp = b[posMin];
      b[posMin] = b[i];
      b[i] = temp;
     }
}
void imprimir_arr(double a[n],int b[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("promedio[%d] = %lf \t legajo[%d] = %d\n",i,a[i],i,b[i]);
     }
    printf("\n\n");

}
int main(void)
{
    int legajos[n] = {17344, 16744, 15524, 18001, 13144};
    double promedios[n] = {8.12, 7.21, 6.01, 9.10, 8.44};

    imprimir_arr(promedios,legajos);
    ordenar_por_promedio(promedios, legajos);
    imprimir_arr(promedios, legajos);

    return 0;
}


