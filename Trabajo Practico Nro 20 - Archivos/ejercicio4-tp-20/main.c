#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define str 81

void reemplazo_ortografico(FILE* pArch,char palabra[str],FILE* pCorr,char reemplazo[str] )
{
    char retorno;
    char ch[str];


    retorno = fscanf(pArch,"%s",ch);
    while(retorno != EOF)
    {
        if(strcmp(ch,palabra)== 0)
        {
            fprintf(pCorr,"%s ",reemplazo);
        }
        else
            fprintf(pCorr,"%s ",ch);

        retorno = fscanf(pArch,"%s",ch);
    }

    fclose(pArch);
    fclose(pCorr);
}

int main(void)
{
    FILE* pOrigen;
    FILE* pDestino;
    char ch;
    char ent[str];
    char sal[str];
    char pal[str];
    char reem[str];

    printf("Ingrese nombre de archivo de entrada(formato .txt):");
    scanf("%s",ent);
    printf("Ingrese nombre de archivo de salida(formato .txt):");
    scanf("%s",sal);
    printf("Ingrese palabra a corregir:");
    scanf("%s",pal);
    printf("Ingrese palabra de reemplazo:");
    scanf("%s",reem);

    pOrigen = fopen(ent,"r");
    if(pOrigen == NULL)
    {
        printf("No se pudo abrir el archivo %s \n",ent);
        return -1;
    }
    pDestino = fopen(sal,"w");
    if(pDestino == NULL)
    {
        printf("No se pudo abrir el archivo %s \n",sal);
        return -2;
    }
    reemplazo_ortografico(pOrigen,pal,pDestino,reem);

    fclose(pOrigen);
    fclose(pDestino);



    return 0;
}

