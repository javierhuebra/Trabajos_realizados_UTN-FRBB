#include <stdio.h>

int* generar_estructura(int N)
{
    int i;
    int* ptr = (int *) calloc(N,sizeof(int));

    for(i=0;i<N;i++)
    {
        ptr[i]=i+1;
    }

    return ptr;
}
void liberar(int* p)
{
    free(p);

    return;
}
void imprimir_arr(int n,int* a[])
{
    int i;

    for(i=0;i<n;i++)
     {
        printf("arr[%d] = %d \n",i,a[i]);
     }
    printf("\n\n");
}
int suma(int n,int* a)
{
    int i;
    int sum=0;

    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    int nroElementos;
    int *Pelementos;
    int res=0;

    printf("Ingrese la cantidad de elementos que se van a crear:");
    scanf("%d",&nroElementos);
    printf("\n\n");
    Pelementos = generar_estructura(nroElementos);
    imprimir_arr(nroElementos, Pelementos);
    res = suma(nroElementos,Pelementos);
    printf("SUMATORIA = %d\n\n",res);
    liberar(Pelementos);
    Pelementos = NULL;
    imprimir_arr(nroElementos,Pelementos);



    return 0;
}

