/* EJEMPLO DE USO DE UNA VARIABLE LOCAL*
 * CON PERSISTENCIA ESTATICA*************
 ****************************************/

#include <stdio.h>

int funcion(int x)
{
    int y=0;
    static int t=0;
    y = (2*x*x)+ x;
    t++;

    return y-t;
}

int main(void)
{
    int i;
    for(i=0;i<10;i++)
     {
        printf(" Valor de la funcion:  %d\n",funcion(2));
     }
    printf(" Valor de la variable Y:  %d\n\n",funcion(4));

    return 0;
}

