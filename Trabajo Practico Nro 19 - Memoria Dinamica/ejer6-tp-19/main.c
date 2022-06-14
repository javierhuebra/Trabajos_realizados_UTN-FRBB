#include <stdio.h>
#define str 81

typedef struct
{
    char patente[str];
    char marca[str];
    char mod[str];
    char nombre[str];
    int anio;

}Automovil;

Automovil* generar_estructura(int N)
{
    int i;
    Automovil* temp;
    Automovil* ptr = (Automovil*) calloc(N,sizeof(Automovil));

    temp = ptr;

    for(i=0;i<N;i++)
    {
        printf("AUTOMOVIL %d\n",i+1);
        printf("Ingrese marca:");
        scanf("%s",&temp->marca);
        printf("Ingrese modelo:");
        scanf("%s",&temp->mod);
        printf("Ingrese el dominio (Separado por un gui\242n):");
        scanf("%s",&temp->patente);
        printf("Ingrese nombre del chofer:");
        scanf("%s",&temp->nombre);
        printf("Ingrese a\244o de adquisici\242n:");
        scanf("%d",&temp->anio);
        printf("\n");
        temp++;
    }
    return ptr;
}
void imprimir_arr(int n,Automovil a[])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("Automovil [%d] = %s %s. Patente: %s. Chofer: %s. a\244o: %d \n",i,a[i].marca,a[i].mod,a[i].patente,a[i].nombre,a[i].anio);
     }
    printf("\n\n");
}
void ordenar_arreglo_por_anio(int n,Automovil a[])
{
    int i, j, posMin;
    Automovil temp;

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(a[j].anio < a[posMin].anio)
              posMin = j;
       }
      temp = a[posMin];
      a[posMin] = a[i];
      a[i] = temp;
     }
}
ordenar_arreglo_por_nombre(int n, Automovil a[])
{
    int i, j, posMin;
    Automovil temp;

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(strcmp(a[j].nombre,a[posMin].nombre) < 0)
              posMin = j;
       }
      temp = a[posMin];
      a[posMin] = a[i];
      a[i] = temp;
     }
}
ordenar_arreglo_por_mod(int n,Automovil a[])
{
    int i, j, posMin;
    Automovil temp;

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(strcmp(a[j].mod,a[posMin].mod) < 0)
              posMin = j;
       }
      temp = a[posMin];
      a[posMin] = a[i];
      a[i] = temp;
     }
}
int main(void)
{
    int n,opcion;
    Automovil* pAutos;

    printf("Ingrese la cantidad de autom\242viles: ");
    scanf("%d",&n);
    printf("\n\n");
    pAutos = generar_estructura(n);
    imprimir_arr(n,pAutos);

    printf("Listar por:\n");
    printf("1. \tModelo\n");
    printf("2. \tA\244o de adquisici\242n\n");
    printf("3. \tNombre de chofer\n");
    printf("Opci\242n?: ");
    scanf("%d",&opcion);
    printf("\n");

    switch(opcion)
    {
        case 1:ordenar_arreglo_por_mod(n,pAutos);
               printf("\tORDENADO POR MODELO\n");
               imprimir_arr(n,pAutos);break;

        case 2:ordenar_arreglo_por_anio(n,pAutos);
               printf("\tORDENADO POR A\245O\n");
               imprimir_arr(n,pAutos);break;

        case 3:ordenar_arreglo_por_nombre(n,pAutos);
               printf("\tORDENADO POR NOMBRE DE CHOFER\n");
               imprimir_arr(n,pAutos);break;

        default: printf("ERROR \n\n");break;
    }

    free(pAutos);

    return 0;
}
