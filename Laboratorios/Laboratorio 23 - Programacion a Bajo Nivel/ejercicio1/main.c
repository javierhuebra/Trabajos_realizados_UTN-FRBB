#include <stdio.h>

int main(void)
{
    unsigned int valor_bit;
    unsigned int valor_hex;
    unsigned int mask2 = 0xF0000000;
    int valor;
    int i;
    char digito[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    printf("Ingrese valor del entero en base 10:");
    scanf("%d",&valor);
    printf("\n\n");

    printf("Valor Binario: ");
    for(i=0;i<sizeof(int)*8;i=i+4)
    {
        valor_bit =  valor & mask2;

        valor_bit >> (28-i);

        printf("%c", digito[valor_bit]);
        mask2 = mask2 >> 4;
    }
    printf("\n\n");

    printf("\n\n");

    return 0;
}

