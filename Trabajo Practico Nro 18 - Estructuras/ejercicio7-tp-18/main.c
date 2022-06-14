#include <stdio.h>
#define str 81
#define n 5
typedef struct
{
    char nombre[str];
    char apellido[str];
    int edad;
    int dni;

}Persona;

void imprimir_arr(Persona a[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("%s %s;  Edad: %d;  D.N.I: %d\n",
               a[i].nombre,a[i].apellido,a[i].edad,a[i].dni);
     }
    printf("\n\n");
}
int busqueda(int key,Persona a[n])
{
    int i;

    for (i=0;i<n;i++)
     {
        if(a[i].edad == key)
        {
            return i;
        }
     }
    return -1;
}
int main(void)
{
    Persona datos[n] = {
        {"Javier","Huebra",20,38431370},
        {"Ariel","Arce",51,14700585},
        {"Jose","Bosso",48,17636860},
        {"Matias","Rodriguez",15,40654456},
        {"Javier","Gonzalez",26,33606978}

    };
    int res,i,temp;
    int* ptr[n];

    imprimir_arr(datos);

    for(i=0;i<n;i++)
    {
        ptr[i] = datos[i].edad;
    }
    temp = 1000;
    for (i=0;i<n;i++)
     {
        if(temp < ptr[i])
        {
            temp = temp;
        }
        else
            temp = ptr[i];
     }
    res = busqueda(temp,datos);

    printf("La persona mas joven es %s %s\n\n",datos[res].nombre,datos[res].apellido);
    return 0;
}

