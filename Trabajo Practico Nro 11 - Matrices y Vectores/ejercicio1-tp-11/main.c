#include <stdio.h>
#include <math.h>


void vectores()
{
    printf("      _     _            _     _ \n");
    printf("     |  4.3  |          |  3.2  |\n");
    printf(" u = | -1.0  |      v = |   9   |\n");
    printf("     |_ 5.4 _|          |_ -3  _|\n");
}
void imprimir_vector(double x[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("  %+.2lf\n", x[i]);
    }
    printf("\n\n");
}
int comparar_vector(double x1[],double x2[])
{
    int i=0;

    if(x1[i]!=x2[i])
        return 0;
    i++;
    if(x1[i]!=x2[i])
        return 0;
    i++;
    if(x1[i]!=x2[i])
        return 0;
        return 1;
}
double modulo_vector(double x1[], int n)
{
    double res=0;
    int i;
    for(i=0;i<n;i++)
    {
        res += x1[i] * x1[i];
    }
    res = sqrt(res);
    return res;
}
void escalar_por_vector(double lambda, double x[],double res[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        res[i] = lambda * x[i];
    }
}
void suma_vectorial(double x1[], double x2[],double res2[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        res2[i]= x1[i] + x2[i];
    }
}
double producto_escalar(double x1[], double x2[],int n)
{
    int i;
    double res3=0;

    for(i=0;i<n;i++)
    {
        res3 += x1[i] * x2[i];
    }
    return res3;
}
int main(void)
{
    int opcion;
    int x;
    double esc;
    double eXv[x];
    double suma[x];
    double vector_u[] = { 4.3,-1.0,5.4};

    double vector_v[] = { 3.2,9.0,-3.0};

    vectores();
    printf("\n");
    printf("Valor del orden de los vectores?  ");
    scanf("%d", &x);
    printf("\n\n\t\t\tMENU DE OPCIONES\n\n");
    printf("\t\t1.\tComparar vector\n");
    printf("\t\t2.\tM\242dulo del vector\n");
    printf("\t\t3.\tEscalar por vector\n");
    printf("\t\t4.\tSuma vectorial\n");
    printf("\t\t5.\tProducto escalar\n\n");
    printf("Opci\242n?  ");
    scanf("%d", &opcion);
    printf("\n\n");

    switch (opcion)
    {
    case 1: if(comparar_vector(vector_u,vector_v)==1)
            {
                printf(" Son iguales\n\n");
                break;
            }
            else
            {
                printf(" Son distintos\n\n");
                break;
            }

    case 2: printf(" Modulo del vector u = %lf \n",modulo_vector(vector_u,x));
            printf(" Modulo del vector v = %lf \n", modulo_vector(vector_v,x));break;

    case 3: printf("valor de lambda?  ");
            scanf("%lf",&esc);
            printf("\n");
            escalar_por_vector(esc,vector_u,eXv,x);
            imprimir_vector(eXv,x);
            escalar_por_vector(esc,vector_v,eXv,x);
            imprimir_vector(eXv,x);
            break;

    case 4: suma_vectorial(vector_u,vector_v,suma,x);
            imprimir_vector(suma,x); break;

    case 5: printf(" Producto escalar = %+.2lf\n",producto_escalar(vector_u,vector_v,x));
            break;

    default: printf("ERROR\n");
    }

    return 0;
}
