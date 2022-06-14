#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[101];
    char str2[101];
    char str3[101];
    char str4[101];
    int val1,val2,val3,val4;
    int res;

    printf(" Ingrese cadena 1: ");
    gets(str1);
    printf("\n");
    printf(" Ingrese cadena 2: ");
    gets(str2);
    printf("\n");
    printf(" Ingrese cadena 3: ");
    gets(str3);
    printf("\n");
    printf(" Ingrese cadena 4: ");
    gets(str4);
    printf("\n");

    val1 = atoi(str1);
    val2 = atoi(str2);
    val3 = atoi(str3);
    val4 = atoi(str4);

    res = val1 + val2 + val3 + val4;

    printf(" Resultado de la suma de cadenas = %d\n",res);

    return 0;
}

