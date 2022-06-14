/* EJEMPLO DE USO DE UNA VARIABLE LOCAL*
 * CON PERSISTENCIA DINAMICA*************
 ****************************************/

#include <stdio.h>

int funcion(int x)
{
    int a=0;
    a = a+x;
    return a;
}

int main(void)
{
    int a,cont;

    for(cont=1; cont<=10; cont++)
     {
        printf(" Funcion = %d con cont = %d\n",funcion(cont),cont);
     }
    return 0;
}

