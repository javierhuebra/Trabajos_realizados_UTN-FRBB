#include <stdio.h>

// aclaracion: mi teclado no posee letra enie!!!

int main(void)
{
    // Declaracion de las variables dia, mes, anio

    int dia;
    int mes;
    int anio;

    // Comienzo del programa

    printf("Este es el programa escritor de fechas: \n");
    printf("dia?"); scanf("%d", &dia);
    printf("mes?"); scanf("%d", &mes);
    printf("anio?");scanf("%d", &anio);
    printf("La fecha ingresada es %d/%d/%d \n",dia,mes,anio);
    printf("Fin del programa \n");

    return 0;
}

