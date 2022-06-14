#include <stdio.h>
#define N 10

void imprimir_arr(char *a[N],int *b[N])
{
    int i;

    for(i=0;i<N;i++)
    {
        printf("Nombre[%d] = %s \t N\243mero: %d\n",i,a[i],*b[i]);
    }
    printf("\n\n");
}
void ordenar_por_nombre(char* a[N],int* b[N])
{
    int i, j, posMin;
    char *temp;
    int *temp1;

    for(i=0; i<N-1;i++)
    {
        posMin = i;

        for(j=i;j<N;j++)
        {
            if(strcmp(a[j],a[posMin]) < 0)
                posMin = j;
        }
        temp = a[posMin];
        a[posMin] = a[i];
        a[i] = temp;

        temp1 = *b[posMin];
        *b[posMin] = *b[i];
        *b[i] = temp1;
    }
}
void ordenar_por_numero(int* a[N],char* b[N])
{
    int i, j, posMin;
    int *temp;
    char *temp1;

    for(i=0; i<N-1;i++)
    {
        posMin = i;

        for(j=i;j<N;j++)
        {
            if(*a[j]<*a[posMin])
                posMin = j;
        }
        temp = *a[posMin];
        *a[posMin] = *a[i];
        *a[i] = temp;

        temp1 = b[posMin];
        b[posMin] = b[i];
        b[i] = temp1;
    }
}
int main(void)
{
    const char* nombres[N]= {
        "Jonathan","Joaquin","Ariel","Lucas","Javier",
        "Roberto","Carlos","Anibal","Esteban","Walter"
    };
    const int numeros[N] = {
        414326,460054,450045,402632,481196,
        484181,481903,464790,483000,481184
    };

    char* pnombres[N];
    int* pnumeros[N];
    int i;
    int opcion;

    for(i=0;i<N;i++)
    {
        pnombres[i] = nombres[i];
    }
    for(i=0;i<N;i++)
    {
        pnumeros[i] = &numeros[i];
    }

    imprimir_arr(pnombres,pnumeros);

    printf("Elegir opci\242n de ordenado: \n");
    printf("1. Por nombre \n");
    printf("2. Por N\243mero \n");
    printf("Opci\242n? \n");
    scanf("%d",&opcion);

    switch(opcion)
    {
    case 1:ordenar_por_nombre(pnombres,pnumeros);
             imprimir_arr(pnombres,pnumeros);break;

    case 2:ordenar_por_numero(pnumeros,pnombres);
             imprimir_arr(pnombres,pnumeros);break;

    default:printf("ERROR\n\n");
    }

    return 0;
}

