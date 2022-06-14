#include <stdio.h>

void ordenar_arreglo_seleccion(char *a[12])
{
    int i, j, posMin;
    char *temp;

    for(i=0; i<12-1;i++)
    {
        posMin = i;

        for(j=i;j<12;j++)
        {
            if(strcmp(a[j],a[posMin]) < 0)
                posMin = j;
        }
        temp = a[posMin];
        a[posMin] = a[i];
        a[i] = temp;
    }
}
int main(void)
{
    const char *meses[] = {
        " Enero ",
        " Febrero ",
        " Marzo ",
        " Abril ",
        " Mayo ",
        " Junio ",
        " Julio ",
        " Agosto ",
        " Setiembre ",
        " Octubre ",
        " Noviembre ",
        " Diciembre "
    };
    char *pmes[12];
    int i;

    for(i=0;i<12;i++)
    {
        pmes[i] = meses[i];
        printf("puntero[%02d] = %p \t Ordenado: %s\n",i,pmes[i],pmes[i]);
    }

    ordenar_arreglo_seleccion(pmes);

    printf("\tDESPUES\t\n");

    for(i=0;i<12;i++)
    {
        printf("puntero[%02d] = %p \t Ordenado: %s\n",i,pmes[i],pmes[i]);
    }

    return 0;
}

