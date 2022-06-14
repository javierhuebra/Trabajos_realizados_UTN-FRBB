#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nom[50];
    char ape[50];
}persona;

typedef struct
{
    persona datos;
    char ranking[20];
}jugador;


typedef struct
{
    persona dt;
    jugador jugador1;
    jugador jugador2;
}equipo;

int main()
{
    jugador jugador1;
    jugador jugador2;
    persona dt;
    equipo eq;

    printf("Jugador 1:\n");
    printf("Ingresar Nombre: ");
    gets(jugador1.datos.nom);
    printf("Ingresar Apellido: ");
    gets(jugador1.datos.ape);
    printf("Ranking: ");
    gets(jugador1.ranking);

    printf("\nJugador 2:\n");
    printf("Ingresar Nombre: ");
    gets(jugador2.datos.nom);
    printf("Ingresar Apellido: ");
    gets(jugador2.datos.ape);
    printf("Ranking: ");
    gets(jugador2.ranking);

    printf("\nDirector Tecnico:\n");
    printf("Ingresar Nombre:");
    gets(dt.nom);
    printf("Ingresar Apellido: ");
    gets(dt.ape);

    eq.jugador1=jugador1;
    eq.jugador2=jugador2;
    eq.dt=dt;

    printf("\nEl Equipo esta formado por:\nDT: %s %s\n\nJugador1: %s %s\nRank:%s\n\nJugador2: %s %s\nRank:%s\n\n",eq.dt.nom,eq.dt.ape,eq.jugador1.datos.nom,eq.jugador1.datos.ape,eq.jugador1.ranking,eq.jugador2.datos.nom,eq.jugador2.datos.ape,eq.jugador2.ranking);

}


