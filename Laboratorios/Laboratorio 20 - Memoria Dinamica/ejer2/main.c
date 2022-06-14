#include <stdio.h>
#define largo 81

typedef struct
{
    char nombre[largo];
    char apellido[largo];

} Persona;

Persona* generar_estructura(int N)
{
    int i;
    Persona * temp;
    Persona* ptr = (Persona *) calloc(N,sizeof(Persona));

    temp = ptr;

    for(i=0;i<N;i++)
    {
        printf("Ingrese nombre de Persona %d:",i+1);
        scanf("%s",&temp->nombre);
        printf("Ingrese apellido de Persona %d:",i+1);
        scanf("%s",&temp->apellido);
        printf("\n");
        temp++;
    }
    return ptr;
}
void imprimir_arr(int n,Persona a[])
{
    int i;

    for(i=n-1;i>=0;i--)
     {
        printf("Persona %d: %s %s \n",i+1,a[i].nombre,a[i].apellido);
     }
    printf("\n\n");
}
int main(void)
{
    int nroPersonas;
    Persona *Ppersonas;

    printf("Ingrese la cantidad de personas que se van a crear:");
    scanf("%d",&nroPersonas);
    printf("\n\n");
    Ppersonas = generar_estructura(nroPersonas);
    imprimir_arr(nroPersonas,Ppersonas);

    return 0;
}

