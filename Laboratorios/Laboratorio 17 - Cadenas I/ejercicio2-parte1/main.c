#include <stdio.h>
#include <string.h>

void ordenar_arreglo(int *punt[3])
{
    int pasada;
    int j;
    int *temp;

    for(pasada=1;pasada<3;pasada++)
    {
        temp = punt[pasada];

        j = pasada-1;
        while((j>=0) && (strlen(temp)<strlen(punt[j])))
        {
            punt[j+1] = punt[j];
            j = j-1;
        }
        punt[j+1] = temp;
    }
}
int main(void)
{
    char str1[81];
    char str2[81];
    char str3[81];
    char * cadenas[3];
    int i;

    printf("Ingrese cadena 1:");
    gets(str1);
    printf("Ingrese cadena 2:");
    gets(str2);
    printf("Ingrese cadena 3:");
    gets(str3);

    cadenas[0] = str1;
    cadenas[1] = str2;
    cadenas[2] = str3;

    ordenar_arreglo(&cadenas);

    for(i=0;i<3;i++)
     {
        printf(" %s \n",cadenas[i]);
     }
    return 0;
}

