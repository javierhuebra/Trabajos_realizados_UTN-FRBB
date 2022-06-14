#include <stdio.h>
#include <string.h>

void ordenar_arreglo_seleccion(char a[5][81])
{
    int i, j, posMin;
    char temp[81];

    for(i=0; i<5-1;i++)
    {
        posMin = i;

        for(j=i;j<5;j++)
        {
            if(strcmp(a[j],a[posMin]) < 0)
                posMin = j;
        }
        strcpy(temp,a[posMin]);
        strcpy(a[posMin],a[i]);
        strcpy(a[i],temp);
    }
}
int main(void)
{
    char nombres[5][81];
    int i;

    for(i=0;i<5;i++)
    {
        puts(" Ingrese nombre:");
        gets(nombres[i]);
    }

    puts(" Usted ha ingresado:");

    for(i=0;i<5;i++)
    {
        puts(nombres[i]);
    }
    puts("");

    ordenar_arreglo_seleccion(nombres);

    for(i=0;i<5;i++)
    {
        puts(nombres[i]);
    }
    return 0;
}

