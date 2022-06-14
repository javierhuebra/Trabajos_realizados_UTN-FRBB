#include <stdio.h>
#include <time.h>

void imprimir( int mat[10][10])
{
    int i, j;
    for( i=0; i<10; i++)
    {
        for( j=0; j<10; j++)
        {
            printf("%02i  ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void espiral( int mat[10][10])
{
    int i, j, k;
    for( k=0; k<10; k++)
    {
        for( j=k; j<10-k; j++)
        {
            printf("%02i  ", mat[k][j]);
        }
        printf("\n");
        for( i=1+k; i<10-k; i++)
        {
            printf("%02i  ", mat[i][9-k]);
        }
        printf("\n");
        for( j=8-k; j>=k; j--)
        {
            printf("%02i  ", mat[9-k][j]);
        }
        printf("\n");
        for( i=8-k; i>k; i--)
        {
            printf("%02i  ", mat[i][k]);
        }
        printf("\n");
    }
}

int main(void)
{
    int i, j;
    int mat[10][10];

    for( i=0; i<10; i++)
    {
        for( j=0; j<10; j++)
        {
            mat[i][j] = 10*i + j;
        }
    }

    imprimir(mat);
    printf("***** MEGA-PATRON-ESPIRAL POR EL MEGA-PRO-CIFU *****\n\n");
    espiral(mat);

    return 0;
}
