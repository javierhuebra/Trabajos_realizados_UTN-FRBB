#include <stdio.h>
#include<time.h>

int main()
{
    int i,j;
    int n;
    int mat[n][n];
    int nro;

//**************************************

    srand(time(NULL));
    printf(" Ingrese el valor de n:    ");  scanf("%d", &n);
    printf("\n\n");

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            nro = rand() % 10;
            mat[i][j] = nro;
            printf("% d", mat[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if ( i<=j )
            {
            printf ("% d",mat[i][j]);
            }
            else
                printf("  ");
        }
        printf ("\n");
    }

    printf ("\n\n");

    return 0;
}


