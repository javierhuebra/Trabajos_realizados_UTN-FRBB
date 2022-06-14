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
int busqueda_sec(int key, int a[n])
{
    int i;
    for (i=0;i<n;i++)
     {
        if(a[i]==key)
            return i;
     }
    return -1;
}
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

void imprimir_resultado(int key, int doc, int leg)
{
    if(doc > 0)
        printf("DNI = %d\t LEGAJO = %d\n",doc,leg);
    else
        printf("Registro %d no encontrado\n",doc);
}
int leer_clave()
{
    int clave;
    printf(" Ingrese el valor de la clave:   ");
    scanf("%d",&clave);
    printf("\n\n");
    return clave;
}
int main(void)
{
    int dni[n] = {11111111,66666666,22222222,99999999,44444444,
                  77777777,10101010,33333333,88888888,55555555};

    int legajo[n] = {10101,11111,22222,33333,44444,
                     55555,66666,77777,88888,99999,};

    int clave;
    int res;
    int res2;
    int opcion;

    printf("Numeros de dni\n\n");
    imprimir_arr(dni);
    printf("Numeros de legajo\n\n");
    imprimir_arr(legajo);

    printf("    QUE DESEA INGRESAR\n");
    printf("1. DNI\n");
    printf("2. LEGAJOS\n");
    scanf("%d",&opcion);

    switch(opcion)
      {
    case 1:    clave = leer_clave();
               res = busqueda_sec(clave,dni);
               printf("DNI = %d\t LEGAJO = %d\n\n",clave,legajo[res]);break;

    case 2:    clave = leer_clave();
               res2 = busqueda_bin(clave,legajo);
               printf("DNI = %d\t LEGAJO = %d\n\n",dni[res2],clave);break;

    default: printf("ERROR\n");
      }
    return 0;
}

