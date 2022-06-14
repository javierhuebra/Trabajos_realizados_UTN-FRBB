#include <stdio.h>
#define n 10

char a[n] = {'G', 'P', 'J', 'R', 'Y', 'H', 'Q', 'U', 'K', 'Z'};

void imprimir_arr(char a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("a[%d] = %c\n",i,a[i]);
     }
    printf("\n\n");

}
char leer_clave()
{
    char clave;
    printf(" Ingrese el valor de la clave:   ");
    scanf("%c",&clave);
    clave = toupper(clave);
    printf("\n\n");

    return clave;
}
int busqueda(char key, char a[n])
{
    int i;
    for (i=0;i<n;i++)
     {
        if(a[i]==key)
            return i;
     }
    return -1;
}
void imprimir_resultado(char clave, int pos)
{
    if(pos < 0)
        printf("Valor %c no encontrado\n",clave);
    else
        printf("Valor %c encontrado en la posicion %d\n",clave,pos);
}
int main(void)
{
    char clave;
    int res;

    imprimir_arr(a);
    clave = leer_clave();
    res = busqueda(clave,a);
    imprimir_resultado(clave, res);

    return 0;
}

