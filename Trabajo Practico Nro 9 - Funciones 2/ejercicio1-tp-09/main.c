/* EJEMPLO DE USO DE UNA VARIABLE GLOBAL*
 * CON PERSISTENCIA ESTATICA*************
 ****************************************/

#include <stdio.h>

int reloj;

void incrementoReloj()
{
    reloj++;
}
void imprimirReloj()
{
    printf(" Valor de reloj:  %d\n", reloj);
}

int main(void)
{
    int i;

    printf(" Valor inicial de reloj:  %d \n\n",reloj);
    for(i=0;i<15; i++)
     {
        incrementoReloj();
        imprimirReloj();
     }

    return 0;
}

