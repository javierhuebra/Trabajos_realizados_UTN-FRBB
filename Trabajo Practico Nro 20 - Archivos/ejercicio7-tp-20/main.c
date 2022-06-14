#include <stdio.h>
#include <time.h>

typedef struct
{
    int x;
    int y;

}Punto;

FILE* generar_arch(char origen[81],int n)
{
    FILE* pArch_g;
    Punto arr[n];
    int i;

    pArch_g = fopen(origen,"wb");
    if(pArch_g == NULL)
    {
        printf("No se pudo abrir el archivo %s \n",origen);
        return -1;
    }
    for(i=0;i<n;i++)
    {
        arr[i].x = rand() % 21;
        arr[i].y = rand() % 21;
    }
    fwrite(arr,sizeof(Punto),n,pArch_g);

    return pArch_g;
}

int main(void)
{
    FILE *fp;
    FILE *fp2;
    int cant_puntos;
    int n,i;
    char ent[81];
    char sal[81];

    srand(time(NULL));

    printf("Ingrese nombre de archivo de entrada(formato .bin):");
    scanf("%s",ent);
    printf("Ingrese nombre de archivo de salida(formato .bin):");
    scanf("%s",sal);
    printf("Ingrese la cantidad de puntos a generar: ");
    scanf("%d",&cant_puntos);

    fp = generar_arch(ent,cant_puntos);
    fclose(fp);

    printf("Ingrese el registro que desea eliminar: ");
    scanf("%d",&n);

    fp = fopen(ent,"rb");
    if(fp == NULL)
    {
        printf("No se pudo abrir el archivo %s \n",ent);
        return -1;
    }

    fp2 = fopen(sal,"wb");
    if(fp2 == NULL)
    {
        printf("No se pudo abrir el archivo %s \n",sal);
        return -1;
    }

    Punto arreglo[cant_puntos];
    
    fread(arreglo,sizeof(Punto),cant_puntos,fp);
    for(i=0;i<cant_puntos;i++)
    {
        printf("Registro[%d] = ( %d , %d )\n",i,arreglo[i].x,arreglo[i].y);
    }
    printf("\n \t REGISTRO ELIMINADO\n");

    for(i=0;i<cant_puntos;i++)
    {
        if(i!=n)
        {
            fwrite(fp,sizeof(Punto),cant_puntos,fp2);
            printf("Registro[%d] = ( %d , %d )\n",i,arreglo[i].x,arreglo[i].y);
        }
    }

    fclose(fp);
    fclose(fp2);

    return 0;
}

