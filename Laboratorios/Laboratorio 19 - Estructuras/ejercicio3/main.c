#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nom[50];
    char ape[50];
}persona;


void imprimirPersona(  persona* punterosDatos[4] )
{
    int i;


    for (i=0;i<4;i++)
    {
        printf ("persona [%d]= %s  %s ==> direccion de memoria %p \n",i +1 ,punterosDatos[i]->nom,punterosDatos[i]->ape,punterosDatos[i]);
    }


}

int main()
{


    persona* punterosDatos[4];
    persona datos[4];
    int i;

    for(i = 0; i < 4; i++)
    {
        printf ("PERSONA %d :\n", i + 1);
        printf("Ingresar Nombre: ");
        gets(datos[i].nom);
        printf("Ingresar Apellido: ");
        gets(datos[i].ape);
    }




    for(i=0; i<4; i++)
    {
       punterosDatos[i]= &datos[i];




    }

    imprimirPersona(punterosDatos);



    printf("\n\n\n");

    for(i=0; i<4; i++)
    {

       punterosDatos[i]= &datos[3-i];
    }

    imprimirPersona(punterosDatos);



    return 0;


}

