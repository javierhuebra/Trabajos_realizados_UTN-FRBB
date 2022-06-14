#include <stdio.h>
#include <time.h>
#include <math.h>
#define n 3
void generar_vectores(int v1[n],int v2[n],int v3[n],int v4[n])
{
    int i;

    for(i=0;i<n;i++)
     {
        v1[i] = rand()%201-100;
     }
    for(i=0;i<n;i++)
     {
        v2[i] = rand()%201-100;
     }
    for(i=0;i<n;i++)
     {
        v3[i] = rand()%201-100;
     }
    for(i=0;i<n;i++)
     {
        v4[i] = rand()%201-100;
     }
}
void imprimir_vectores(int x[n],int x2[n],int x3[n],int x4[n])
{
    int i;
    printf(" P1 = \n");
    for(i=0;i<n;i++)
    {
        printf("      %d\n", x[i]);
    }
    printf("\n\n");
    printf(" P2 = \n");
    for(i=0;i<n;i++)
    {
        printf("      %d\n", x2[i]);
    }
    printf("\n\n");
    printf(" P3 = \n");
    for(i=0;i<n;i++)
    {
        printf("      %d\n", x3[i]);
    }
    printf("\n\n");
    printf(" P4 = \n");
    for(i=0;i<n;i++)
    {
        printf("      %d\n", x4[i]);
    }
    printf("\n\n");
}
double calculo_de_distancia(int x[n],int x0[n])
{
    double dist=0;
    int i;
    dist=0;
    for(i=0;i<n;i++)
     {
        dist +=((x[i]-x0[i])*(x[i]-x0[i]));
     }
    dist = sqrt(dist);
    return dist;
}
int main(void)
{
    int p1[n],p2[n],p3[n],p4[n];
    double D1_2,D1_3,D1_4,D2_3,D2_4,D3_4;
    srand(time(NULL));

    generar_vectores(p1,p2,p3,p4);
    imprimir_vectores(p1,p2,p3,p4);
    D1_2 = calculo_de_distancia(p1,p2);
    D1_3 = calculo_de_distancia(p1,p3);
    D1_4 = calculo_de_distancia(p1,p4);
    D2_3 = calculo_de_distancia(p2,p3);
    D2_4 = calculo_de_distancia(p2,p4);
    D3_4 = calculo_de_distancia(p3,p4);

    printf("P1 con P2: %.16lf\n",D1_2);
    printf("P1 con P3: %.16lf\n",D1_3);
    printf("P1 con P4: %.16lf\n",D1_4);
    printf("P2 con P3: %.16lf\n",D2_3);
    printf("P2 con P4: %.16lf\n",D2_4);
    printf("P3 con P4: %.16lf\n\n",D3_4);

    if(D1_2<D1_3 && D1_2<D1_4 && D1_2<D2_3 && D1_2<D2_4 && D1_2<D3_4)
        printf(" Se encuentran mas cercanos P1 con P2\n\n");
    else if(D1_3<D1_4 && D1_3<D2_3 && D1_3<D2_4 && D1_4<D3_4)
            printf(" Se encuentran mas cercanos P1 con P3\n\n");
         else if(D1_4<D2_3 && D1_4<D2_4 && D1_4<D3_4)
                printf(" Se encuentran mas cercanos P1 con P4\n\n");
              else if(D2_3<D2_4 && D2_3<D3_4)
                     printf(" Se encuentran mas cercanos P2 con P3\n\n");
                   else if(D2_4<D3_4)
                            printf(" Se encuentran mas cercanos P2 con P4\n\n");
                        else
                            printf(" Se encuentran mas cercanos P3 con P4\n\n");

    return 0;
}

