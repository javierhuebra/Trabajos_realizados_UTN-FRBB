#include <stdio.h>
#include <time.h>

int main(void)
{
    int i;
    int j;
    int mat[10][10];

    for(i=0; i<10; i++)
     {
        for(j=0; j<10; j++)
         {
            mat[i][j] = 10*i + j;
            printf("  %2d", mat[i][j]);
         }
        printf("\n");
     }
    printf("\n");
    printf("*******IMPRESION DE LA MATRIZ CON EL PATRON******* \n\n");

    for(i=0; i<10; i++)
     {
        if( i % 2 == 0)
         {
            for(j=0; j<4; j++)
            {
            printf("  %2d", mat[i][j]);
            }
            printf("\n");
          }
        else
          {
            for(j=3; j>=0; j--)
            {
            printf("  %2d", mat[i][j]);
            }
            printf("\n");
          }
     }
    printf("\n");

    for(j=9; j>=4; j--)
     {
        if(j % 2== 1)
         {
            for(i=9; i>=0; i--)
             {
               printf("  %2d", mat[i][j]);
             }
               printf("\n");
         }
        else
         {
            for(i=0; i<=9; i++)
            {
              printf("  %2d", mat[i][j]);
            }
              printf("\n");
         }
     }
    printf("\n");

    return 0;
}

