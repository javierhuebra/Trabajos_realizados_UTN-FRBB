#include <stdio.h>

int main(void)
{
    // declaraciones de las variables del programa

    int x;

    // Valor inicial de la variable x

    x = 0;     // se da un valor a la variable
    printf("Dar un valor a X \n");
    printf("\n");
    printf("X = 0 \n"); //se imprime que valor tiene la variable
    printf("\n");
    printf("Imprima el valor que se le dio a la variable X \n");
    printf("\n");
    printf("El valor de la variable X es %d" "\n",x);
    printf("\n");
    printf("%d \n"); // se vuelve a leer x con el valor 0

    // Nuevo valor de la variable x

    x = 17;    //se asigna el nuevo valor de X
    printf("Asignar nuevo valor a la variable X \n");
    printf("\n");
    printf("X = 17 \n");
    printf("\n");
    printf("Imprima el nuevo valor de la variable X \n");
    printf("\n");
    printf("El nuevo valor de X es %d \n", x);
    printf("\n");
    printf("%d \n"); // se vuelve a leer x con el valor 17


    return 0;
}
