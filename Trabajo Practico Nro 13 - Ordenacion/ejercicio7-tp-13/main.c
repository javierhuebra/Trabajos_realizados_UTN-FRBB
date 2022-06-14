#include <stdio.h>
#include <time.h>

/*****************************************************
 * Cuando el valor de N es par, se buscan los valores
 * medios del arreglo y se calcula la mediana como el
 * promedio de estos valores.
 * ((N/2)+(N/2-1))/2**********************************
 *****************************************************
 * Cuando el valor de N es impar, la mediana es
 * directamente el valor que se encuentra exactamente
 * a la mitad del arreglo*****************************
 */
void ordenar_arreglo(int a[], int n)
{
    int ord, j, posMin;
    int temp;

    for(ord=0;ord<n-1;ord++)
     {
      posMin = ord;

      for(j=ord;j<n;j++)
       {
          if(a[j] < a[posMin])
              posMin = j;
       }
      temp = a[posMin];
      a[posMin] = a[ord];
      a[ord] = temp;
     }
}
void generar_arreglo(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
     {
        a[i] = rand()% 100;
     }
}
void imprimir_arr(int a[], int n)
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("a[%d] = %d\n",i,a[i]);
     }
    printf("\n\n");

}
double calcular_mediana(int a[], int n)
{
    int valor1,valor2;
    double med;

    if(n%2 ==1)
        med = a[n/2];
    else
     {
        valor1 = a[n/2];
        valor2 = a[n/2-1];
        med = (valor1+valor2)/2.0;
     }
    return med;
}
int main(void)
{
    srand(time(NULL));
    int n;
    double mediana;
    int arr[1000];

    printf("Ingrese el tama\244o del arreglo(menor que 1000): "); //menor que 1000 para que sea mas facil corroborar para el usuario cuando es par.
    scanf("%d",&n);
    printf("\n\n");
    generar_arreglo(arr,n);
    imprimir_arr(arr,n);
    ordenar_arreglo(arr,n);
    printf("\tARREGLO ORDENADO\n");
    imprimir_arr(arr,n);

    mediana = calcular_mediana(arr,n);
    printf("Valor de la mediana: %.1lf\n\n", mediana);

    return 0;
}

