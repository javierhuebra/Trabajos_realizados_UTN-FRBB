#include <stdio.h>
#define n 5

void ordenar_por_legajo(int a[n], double b[n])
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
      temp = a[posMin];
      a[posMin] = a[i];
      a[i] = temp;

      tempd = b[posMin];
      b[posMin] = b[i];
      b[i] = tempd;
     }
}
void imprimir_arr(int a[n],double b[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("legajo[%d] = %d \t prom[%d] = %lf\n",i,a[i],i,b[i]);
     }
    printf("\n\n");

}
int main(void)
{
    int legajos[n] = {17344, 16744, 15524, 18001, 13144};
    double promedios[n] = {8.12, 7.21, 6.01, 9.10, 8.44};

    imprimir_arr(legajos,promedios);
    ordenar_por_legajo(legajos, promedios);
    imprimir_arr(legajos,promedios);

    return 0;
}

