#include <stdio.h>

int main(void)
{
    char oracion1[50];
    char oracion2[50];
    char oracion3[50];

    gets(oracion1);
    gets(oracion2);
    gets(oracion3);
    printf("\n");

    printf("    INVERTIDO \n\n");

    puts(oracion3);
    puts(oracion2);
    puts(oracion1);

    printf("\n\n");
    return 0;
}

