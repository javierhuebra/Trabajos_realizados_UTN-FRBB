/*Programa para determinar por medio de un switch un color
 * Ejercicio 7, trabajo practico nro 5********************
 * Jonathan Romulo****************************************/

#include <stdio.h>

int main(void)
{
    char color;
    int r;
    int R;
    int v;
    int V;
    int a;
    int A;
//*********************************************************
    printf("                            MENU DE COLORES\n\n");
    printf("                    r o R: ROJO \n");
    printf("                    v o V: VERDE \n");
    printf("                    a o A: AZUL \n");
    printf("  Cualquier otro caracter: NEGRO \n\n");

    printf("Color?:     ");     scanf("%c", &color);
    printf("\n\n");

    switch(color)
{
    case 114:printf("     ROJO \n\n");break;
    case 82:printf("     ROJO \n\n");break;
    case 118:printf("     VERDE \n\n");break;
    case 86:printf("     VERDE \n\n");break;
    case 65:printf("     AZUL \n\n");break;
    case 97:printf("     AZUL \n\n");break;
    default:printf("     NEGRO \n\n");break;
}
    return 0;
}

