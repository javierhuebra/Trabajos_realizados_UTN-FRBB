#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* pOrigen;
    FILE* pDestino;

    char ch[81];
    char* linea = "que";
    char retorno;

    pOrigen = fopen("E:/extra/ejercicio2.txt", "r");

    pDestino = fopen("E:/extra/salida-ejercicio2.txt", "w");

    retorno = fscanf(pOrigen,"%s",ch);
    while(retorno != EOF)
    {
        if(strcmp(ch,linea)!= 0)
        {
            fprintf(pDestino,"%s ",ch);
        }

        retorno = fscanf(pOrigen,"%s",ch);
    }

    fclose(pOrigen);
    fclose(pDestino);
    return 0;
}

