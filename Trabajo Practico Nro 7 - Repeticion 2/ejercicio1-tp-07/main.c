#include <stdio.h>

int main(void)
{
    int i;
    int ast;
    int correr;
    int arr[7]={1,3,5,7,5,3,1};

    for(i=0; i<7; i++)
    {
        printf("\t");

        for(correr=7; correr>arr[i]; correr=correr-2)
        {
            printf(" ");
        }
        for(ast=0; ast<arr[i]; ast++)
         {
            printf("*");
         }
        printf("\n");
    }
    printf("\n\a");
    return 0;
}

