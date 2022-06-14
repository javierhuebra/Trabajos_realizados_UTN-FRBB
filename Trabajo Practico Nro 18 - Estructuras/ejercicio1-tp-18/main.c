#include <stdio.h>

typedef struct
{
    int rojo;
    int verde;
    int azul;

}Color;

int main(void)
{
    Color rojo;
    Color verde;
    Color azul;
    Color blanco;
    Color negro;
    Color violeta;
    Color celeste;
    Color amarillo;

    rojo.rojo = 255;
    rojo.verde = 0;
    rojo.azul = 0;
    printf("Color rojo = (%d,%d,%d) \n",rojo.rojo,rojo.verde,rojo.azul);

    verde.rojo = 0;
    verde.verde = 255;
    verde.azul = 0;
    printf("Color verde = (%d,%d,%d) \n",verde.rojo,verde.verde,verde.azul);

    azul.rojo = 0;
    azul.verde = 0;
    azul.azul = 255;
    printf("Color azul = (%d,%d,%d) \n",azul.rojo,azul.verde,azul.azul);

    blanco.rojo = 255;
    blanco.verde = 255;
    blanco.azul = 255;
    printf("Color blanco = (%d,%d,%d) \n",blanco.rojo,blanco.verde,blanco.azul);

    negro.rojo = 0;
    negro.verde = 0;
    negro.azul = 0;
    printf("Color negro = (%d,%d,%d) \n",negro.rojo,negro.verde,negro.azul);

    violeta.rojo = 148;     //datos encontrados en internet.
    violeta.verde = 0;
    violeta.azul = 211;
    printf("Color violeta = (%d,%d,%d) \n",violeta.rojo,violeta.verde,violeta.azul);

    celeste.rojo = 135;
    celeste.verde = 206;
    celeste.azul = 235;
    printf("Color celeste = (%d,%d,%d) \n",celeste.rojo,celeste.verde,celeste.azul);

    amarillo.rojo = 255;
    amarillo.verde = 255;
    amarillo.azul = 0;
    printf("Color amarillo = (%d,%d,%d) \n\n",amarillo.rojo,amarillo.verde,amarillo.azul);

    return 0;
}

