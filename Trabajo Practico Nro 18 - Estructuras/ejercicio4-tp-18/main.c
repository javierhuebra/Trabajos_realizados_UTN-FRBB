#include <stdio.h>
#include <time.h>

typedef struct
{
    int x;
    int y;

}Punto;

typedef struct
{
    int rojo;
    int verde;
    int azul;

}Color;

typedef struct
{
    Punto p1;
    Punto p2;
    Color mc;

}Rectangulo;

int main(void)
{
    srand(time(NULL));

    Rectangulo ver1;
    Rectangulo ver2;
    Rectangulo cord3;
    Rectangulo cord4;
    Rectangulo relleno;
    Punto vec1,vec2,vec_b,vec_h;
    double diag1,diag2,superficie,mod_b,mod_h;


    ver1.p1.x = rand() %10;
    ver1.p1.y = rand() %10;

    ver2.p2.x = rand() %10;
    ver2.p2.y = rand() %10;

    relleno.mc.rojo =0;
    relleno.mc.verde =0;
    relleno.mc.azul =255;

    while(ver1.p1.x == ver2.p2.x || ver1.p1.y == ver2.p2.y)
    {
        ver2.p2.x = rand() %10;
        ver2.p2.y = rand() %10;
    }
    //Genero los vertices restantes del rectangulo

    cord3.p1.x = ver1.p1.x;
    cord3.p1.y = ver2.p2.y;

    cord4.p2.x = ver2.p2.x;
    cord4.p2.y = ver1.p1.y;
    //********************************************

    //Genero los vectores y calculo su modulo
    // que seria el valor de la diagonal
    vec1.x = ver2.p2.x - ver1.p1.x;
    vec1.y = ver2.p2.y - ver1.p1.y;
    diag1 = sqrt(pow(vec1.x,2) + pow(vec1.y,2));

    vec2.x = cord3.p1.x - cord4.p2.x;
    vec2.y = cord3.p1.y - cord4.p2.y;
    diag2 = sqrt(pow(vec2.x,2) + pow(vec2.y,2));
    //********************************************

    //Genero nuevos vectores y calculo su modulo
    // para hallar su superficie
    vec_b.x = cord4.p2.x - ver1.p1.x;
    vec_b.y = cord4.p2.y - ver1.p1.y;
    mod_b = sqrt(pow(vec_b.x,2) + pow(vec_b.y,2));

    vec_h.x = ver2.p2.x - cord4.p2.x;
    vec_h.y = ver2.p2.y - cord4.p2.y;
    mod_h = sqrt(pow(vec_h.x,2) + pow(vec_h.y,2));

    superficie = mod_b * mod_h;
    //********************************************

    printf(" Vertice 1: (%d , %d)\n",ver1.p1.x,ver1.p1.y);
    printf(" Vertice 2: (%d , %d)\n",ver2.p2.x,ver2.p2.y);
    printf("   Punto 3: (%d , %d)\n",cord3.p1.x,cord3.p1.y);
    printf("   Punto 4: (%d , %d)\n",cord4.p2.x,cord4.p2.y);

    printf("\n\nDiagonal 1: %lf \n",diag1);
    printf("Diagonal 2: %lf \n",diag2);

    printf("Superficie del rectangulo: %lf \n",superficie);

    printf("Color de relleno:  AZUL (%d , %d , %d)\n\n",relleno.mc.rojo,relleno.mc.verde,relleno.mc.azul);

    return 0;
}
