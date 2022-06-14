#include <stdio.h>
#define n 20

int busqueda_bin(int key, int a[n])
{
 int low=0;
 int high=n-1;
 int medio;

 while(low<=high)
   {
     medio = (low+high)/2;
     if(key == a[medio])
         return medio;
     else if(key < a[medio])
         high = medio-1;
          else
         low = medio+1;
   }
 return -1;
}
void fibonacci(int a[n])
{
    int i;

    if(a[0]!= 1 && a[1]!= 1)
     {
        a[0] = 1;
        a[1] = 1;
     }
    else

    for(i=2;i<n;i++)
     {
        a[i] = a[i-1]+ a[i-2];
     }
}
void imprimir_resultado(int clave, int pos)
{
    if(pos < 0)
        printf("Valor %d no encontrado\n",clave);
    else
        printf("Valor %d encontrado en la posicion %d\n",clave,pos);
}
int leer_clave()
{
    int clave;
    printf(" Ingrese el valor de la clave:   ");
    scanf("%d",&clave);
    printf("\n\n");
    return clave;
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
int main(void)
{
    int clave;
    int res;
    int arr[n]= {1,1};
    fibonacci(arr);

    imprimir_arr(arr);
    clave = leer_clave();
    res = busqueda_bin(clave,arr);
    imprimir_resultado(clave, res);

    return 0;
}

