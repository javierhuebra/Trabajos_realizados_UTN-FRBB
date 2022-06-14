#include <stdio.h>

/*  Un juego mortal
*   El jugador siempre pierde
***************************************************/

    int main()

{
    int numero;
    printf("UN JUEGO MORTAL!! El jugador siempre pierde! \n");
    printf("\n");
    printf("Para jugar este juego debes introducir un numero entre 1 y 10\n");
    printf("Ingrese un valor:\n");
    scanf("%d", &numero);
    printf("lo siento perdiste.\n");
    printf("Vuelva a intentar, a lo mejor tiene mas suerte!" );
    printf("No usar el numero %d otra vez. \n\n",numero);

    return 0;
}

