#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[81];
    char car;
    char *pos;


    printf("Ingrese cadena:");
    gets(str);
    printf("Ingrese un caracter:");
    scanf("%c",&car);

    pos = strchr(str,car);
    printf("El caracter '%c' se encuentra en la posici\242n %d\n\n",car,pos-str);

    return 0;
}

