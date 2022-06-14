#include <stdio.h>
#define n 12
int main(void)
{
    const char *meses[] = {
        " Enero ",
        " Febrero ",
        " Marzo ",
        " Abril ",
        " Mayo ",
        " Junio ",
        " Julio ",
        " Agosto ",
        " Setiembre ",
        " Octubre ",
        " Noviembre ",
        " Diciembre "
    };
    int dia;
    int mes;
    int anio;

    printf("Ingrese el dia:");
    scanf("%d",&dia);
    printf("Ingrese el mes:");
    scanf("%d",&mes);
    printf("Ingrese el a\244o:");
    scanf("%d",&anio);

    printf(" La fecha es %d de %s del %d\n\n",dia,meses[mes-1],anio);
    return 0;
}

