#include <stdio.h>


int main()
{
    int i,j;

    int mat[5][5]= {{0,1,2,3,4},
                    {5,6,7,8,9},
                    {0,1,2,3,4},
                    {5,6,7,8,9},
                    {0,1,2,3,4},};
//**************************************

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
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
