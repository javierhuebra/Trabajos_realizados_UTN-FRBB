#include <stdio.h>

int valor=0;
char numeroAletra(int valor)
{
    if(valor>0 && valor<=20)

       return 'E';

    else if(valor>20 && valor<=40)

        return 'D';

         else if(valor>40 && valor<=60)

              return 'C';

              else if(valor>60 && valor<=80)

                    return 'B';

                   else
                    return 'A';
}

int main(void)
{
    printf(" Ingrese el valor entre 0 y 100:  ");     scanf("%d", &valor);
    printf("\n\n");

    printf("    %c \n\n", numeroAletra(valor));
    return 0;
}

