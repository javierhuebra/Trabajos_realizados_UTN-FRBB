#include <stdio.h>
#include <string.h>
#define CAD 81
#define n 5
struct Auto
{
  char marca[CAD];
  char modelo[CAD];
  char patente[CAD];
  int consumo;
  int peso;
};

int busqueda(char key[CAD], struct Auto a[n])
{
    int i;
    for (i=0;i<n;i++)
     {
        if(strcmp(a[i].patente,key)==0)
            return i;
     }
    return -1;
}
ordenar_arreglo_seleccion(struct Auto a[n])
{
    int i, j, posMin;
    char temp[CAD];

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(strcmp(a[j].patente,a[posMin].patente) < 0)
              posMin = j;
       }
      strcpy(temp,a[posMin].patente);
      strcpy(a[posMin].patente,a[i].patente);
      strcpy(a[i].patente,temp);
     }
}
void imprimir_arr(struct Auto a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("%s %s; patente : %s; Consumo: %d; Peso: %d \n",
               a[i].marca,a[i].modelo,a[i].patente,a[i].consumo,a[i].peso);
     }
    printf("\n\n");
}
int main(void)
{

    struct Auto coches[n] = {
    {"Nissan","GT-R","stb 503",10,1200},
    {"Audi","R8","mnf 854",15,1000},
    {"Pagani","Zonda R","man 454",18,1800},
    {"Ford","Mustang GT","nbd 657",17,1500},
    {"Chevrolet","Camaro SS","muy 123",22,2200},

    };
    char pat[CAD];
    int res;

    imprimir_arr(coches);

    printf("Ingrese la patente a buscar:");
    gets(pat);
    res = busqueda(pat,coches);

    if(res>=0)
    {
        printf("El consumo del auto es %d litros cada 100 km\n\n",coches[res].consumo);
    }
    else
        printf("Patente no encontrada\n\n");

    ordenar_arreglo_seleccion(coches);
    imprimir_arr(coches);

    return 0;
}



