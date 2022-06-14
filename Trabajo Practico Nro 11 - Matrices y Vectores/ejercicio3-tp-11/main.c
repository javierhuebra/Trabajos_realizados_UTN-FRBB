#include <stdio.h>
#define n 3

void imprimir_matriz(double x[n][n])
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
         {
            printf("   %+.4lf", x[i][j]);
         }
        printf("\n\n");
    }
    printf("\n\n");
}
void matriz_identidad(double iden[n][n])
{
    int i,j;
    const double a=1.0;
    const double b=0.0;

    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
         {
            if(i==j)
                iden[i][j] = a;
            else
                iden[i][j] = b;
         }
     }
}
void suma_matricial(double x1[n][n], double x2[n][n],double res[n][n])
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
         {
            res[i][j] = x1[i][j] + x2[i][j];
         }
    }
}
void producto_matricial(double x1[n][n], double x2[n][n],double res2[n][n])
{
    int i,j,k;

    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
         {
            res2[i][j]=0;

            for(k=0;k<n;k++)
            {
                res2[i][j] += x1[i][k] * x2[k][j];
            }
         }
     }
}
void escalar_por_matriz(int lambda, double x1[n][n], double res3[n][n])
{
    int i,j;

    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
         {
            res3[i][j] = lambda * x1[i][j];
         }
     }
}

int main(void)
{
    double A[n][n] = { {4.3 ,-1.4 ,0.4},
                        {3.2 ,4.4 ,4.3},
                       {8.4 ,-5.5 ,8.4},};

    double B[n][n] = { {-1.2 ,-3.0 ,0.45},
                         {0.9 ,-4.3 ,2.3},
                       {4.0 ,5.0 ,-1.0},};

    double suma[n][n];
    double cuadrado[n][n];
    double resta[n][n];
    double I[n][n];
    int I_negativa[n][n];
    double R[n][n];

    matriz_identidad(I);
    suma_matricial(A,B,suma);
    producto_matricial(A,A,cuadrado);
    escalar_por_matriz(-1,I,I_negativa);
    suma_matricial(cuadrado,I_negativa,resta);
    producto_matricial(suma,resta,R);
    imprimir_matriz(R);

    return 0;
}
