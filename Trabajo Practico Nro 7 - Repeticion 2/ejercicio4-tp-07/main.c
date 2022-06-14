#include <stdio.h>

int main(void)
{
    int val;
    int arr[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Ingrese el numero:");
        printf("\n");
        scanf("%d", &val);
        printf("\n");
        arr[i] = val;
    }

    printf(" IMPRESION DE FORMA INVERSA \n\n");

    for(i=4; i>=0; i--)
    {
        printf("%d",arr[i]);
        printf("\n\n");
    }
    return 0;
}
