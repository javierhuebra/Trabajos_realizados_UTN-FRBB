#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    double real;
    double img;

}NumCompl;

NumCompl* generar_estructura(int N)
{
    int i;
    NumCompl* temp;
    NumCompl* ptr = (NumCompl *) calloc(N,sizeof(NumCompl));

    temp = ptr;

    for(i=0;i<N;i++)
    {
        printf("Ingrese parte real:");
        scanf("%lf",&temp->real);
        printf("Ingrese parte imaginaria:");
        scanf("%lf",&temp->img);
        printf("\n");
        temp++;
    }
    return ptr;
}
void imprimir_arr(int n,NumCompl a[])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("Numero Complejo [%d]: %.02lf + %.02lf i\n",i,a[i].real,a[i].img);
     }
    printf("\n\n");
}
void imprimir_arr_mod(int n,double a[])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("M\242dulo [%d]: %lf\n",i,a[i]);
     }
    printf("\n\n");
}
double* calcular_modulo(int n, NumCompl a[])
{
    double* temp;
    double* pArr = (double *) calloc(n,sizeof(double));
    int i;

    temp = pArr;

    for(i=0;i<n;i++)
    {
        *temp = sqrt(pow(a[i].real,2) + pow(a[i].img,2));
        temp++;
    }
    return pArr;
}
void ordenar_arreglo_seleccion(int n,double a[])
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
int main(void)
{
    int cant;
    NumCompl* pComplejo;
    double* pModulo;

    printf("Ingrese la cantidad de Numeros Complejos que se van a crear:");
    scanf("%d",&cant);
    printf("\n\n");

    pComplejo = generar_estructura(cant);
    imprimir_arr(cant,pComplejo);
    pModulo =  calcular_modulo(cant,pComplejo);
    imprimir_arr_mod(cant,pModulo);
    printf("\tORDENADO\n");
    ordenar_arreglo_seleccion(cant,pModulo);
    imprimir_arr_mod(cant,pModulo);

    free(pComplejo);
    free(pModulo);

    return 0;
}
