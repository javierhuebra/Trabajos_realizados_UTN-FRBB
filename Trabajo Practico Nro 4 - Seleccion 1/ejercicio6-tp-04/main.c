/*Este es el programa para encontrar la media
 * de las puntuaciones de un estudiante de informatica
 * Jonathan Romulo************************************/

#include <stdio.h>

int main(void)
{
    int nota_1;
    int nota_2;
    int nota_3;
    int nota_4;
    int nota_total;

//Ingreso de las puntuaciones!

    printf("Ingrese el valor de las puntuaciones: \n \n");
    printf("    Nota 1:  ");    scanf("%d", &nota_1);
    printf("\n");
    printf("    Nota 2:  ");    scanf("%d", &nota_2);
    printf("\n");
    printf("    Nota 3:  ");    scanf("%d", &nota_3);
    printf("\n");
    printf("    Nota 4:  ");    scanf("%d", &nota_4);
    printf("\n");

//Operaciones

    nota_total = (nota_1 + nota_2 + nota_3 + nota_4)/4;

//Condiciones con respecto a las notas

    if (nota_total >=0 && nota_total <=59)
        printf("Usted tiene una E! \n\n");
    if (nota_total >=60 && nota_total <=69)
        printf("Usted tiene una D! \n\n");
    if (nota_total >=70 && nota_total <=79)
        printf("Usted tiene una C! \n\n");
    if (nota_total >=80 && nota_total <=89)
        printf("Usted tiene una B! \n\n");
    if (nota_total >=90 && nota_total <=100)
        printf("Usted tiene una A! \n\n");

    return 0;
}

