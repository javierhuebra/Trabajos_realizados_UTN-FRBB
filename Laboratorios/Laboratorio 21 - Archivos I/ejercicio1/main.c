#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* pOrigen;
    FILE* pDestino;

    char ch;

    pOrigen = fopen("E:/extra/ejercicio1.txt", "r");

    pDestino = fopen("E:/extra/salida-ejercicio1.txt", "w");

    ch = getc(pOrigen);
    while(ch != EOF)
    {
        ch = toupper(ch);
        putc(ch,pDestino);
        ch = getc(pOrigen);
    }

    fclose(pOrigen);
    fclose(pDestino);
    return 0;
}

