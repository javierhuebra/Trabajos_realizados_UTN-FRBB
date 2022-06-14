#include <stdio.h>
#define str 81

int main(void)
{
    FILE* pOrigen;
    FILE* pDestino;

    char ch;
    int i;
    char ent[str];
    char sal[str];

    printf("Ingrese nombre de archivo de entrada(formato .txt):");
    scanf("%s",ent);
    printf("Ingrese nombre de archivo de salida(formato .txt):");
    scanf("%s",sal);

    if(strcmp(ent,sal)==0)
    {
        printf("ERROR! Escriba archivos con distinto nombre\n\n");
        return 0;
    }

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

    printf("Copiando");
    for(i=0;i<5;i++)
    {
        sleep(1);
        printf(".");
    }

    ch = getc(pOrigen);
    while(ch != EOF)
    {
        putc(ch,pDestino);
        ch = getc(pOrigen);
    }

    fclose(pOrigen);
    fclose(pDestino);

    printf("\nFin\n\n");

    return 0;
}

