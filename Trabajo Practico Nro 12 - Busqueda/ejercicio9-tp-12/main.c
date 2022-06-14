#include <stdio.h>
#define n 10
void imprimir_arr(int a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("a[%d] = %d\n",i,a[i]);
     }
    printf("\n\n");

}
int leer_clave()
{
    int clave;
    printf(" Ingrese el valor de la clave:   ");
    scanf("%d",&clave);
    printf("\n\n");
    return clave;
}
int busqueda(int key, int a[n])
{
 int low=0;
 int high=n-1;
 int medio;
 int m;

 while(low<=high)
   {
     m = (a[high]-a[low])/(high-low);
     medio = (key-a[low])/m;

     if(key == a[medio])
         return medio;
     else if(key < a[medio])
         high = medio-1;
          else
         low = medio+1;
   }
 return -1;
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
    int a[n] = {9, 18, 27, 36, 45, 54, 63, 72, 81, 90};
    int clave;
    int res;

    imprimir_arr(a);
    clave = leer_clave();
    res = busqueda(clave,a);
    imprimir_resultado(clave, res);

    return 0;
}

