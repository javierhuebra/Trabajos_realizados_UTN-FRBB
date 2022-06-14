#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre [40];
    char apellido [40];
    char club [40];
    int posicion;

}Jugador ;

int main()
{
    FILE *fp;
    FILE *fp2;

    char *nombre= "campeonato.bin";
    char *nombre2= "jugadores.bin";
    char equipo[30];
    int i;
    int n=0;
    Jugador todos[10];
    Jugador seleccionados[10];


    printf("Ingrese el equpo que desea\n");
    gets(equipo);

    fp=fopen(nombre,"rb");
    if(fp==NULL)
        printf("ERROR \n");
    fread(todos,sizeof(Jugador),10,fp);

    for(i=0;i<10;i++)
    {
        if(strcmp(todos[i].club,equipo)==0)
        {
            seleccionados[n]=todos[i];
            n++;
        }

    }
    fclose(fp);
    fp2=fopen(nombre2,"wb");
    if(fp2==NULL)
        printf("ERROR \n");

    fwrite(seleccionados,sizeof(Jugador), n, fp2);

    for(i=0;i<n;i++)
    {
        printf("%s %s %s %d\n",seleccionados[i].nombre,seleccionados[i].apellido,seleccionados[i].club,seleccionados[i].posicion);
    }

    fclose(fp2);


    return 0;
}

