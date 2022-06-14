#include <stdio.h>
#define N 3

void MME(int lambda ,const int a[N][N], int resul[N][N])
{
    int i=0;
    int j=0;

    for(i=0;i<N;i++)
     {
        for(j=0;j<N;j++)
         {
            resul[i][j] = lambda * a[i][j];
         }
     }

}
void MMM(int f1[N][N], int f2[N][N], int r[N][N])
{
    int i,j,k;

    for(i=0;i<N;i++)
     {
        for(j=0;j<N;j++)
         {
            r[i][j]=0;
            for(k=0;k<N;k++)
            {
                r[i][j] += f1[i][k] * f2[k][j];
            }
         }
     }
}
void SMM(int s1[N][N] ,int s2[N][N],int r[N][N])
{
    int i,j;

    for(i=0;i<N;i++)
     {
        r[i][j]=0;
        for(j=0;j<N;j++)
         {
            r[i][j]= s1[i][j] + s2[i][j];
         }
     }

}
void imprimirmatriz(int matriz[N][N])
{
    int i,j;

    for(i=0;i<N;i++)
     {
        for(j=0;j<N;j++)
         {
            printf("   %d", matriz[i][j]);
         }
        printf("\n");
     }
}

int main(void)
{
    int a[N][N]=  {{1,2,3},
                   {-3,5,6},
                   {2,0,-1}};

    int b[N][N]=  {{9,3,6},
                   {1,3,0},
                   {4,-4,-1}};

    int c[N][N]=  {{2,8,2},
                   {7,-5,5},
                   {1,-5,9}};

    int resultado [N][N];
    int M1[N][N];
    int M2[N][N];
    int D[N][N];
    int resultado2[N][N];
    int k=5;

    MME(k,a,resultado);
    MMM(resultado,c,M1);
    MME(3,b,resultado2);
    MMM(resultado2,c,M2);
    SMM(M1,M2,D);
    imprimirmatriz(D);

    return 0;
}

