#include <stdio.h>

int main(void)
{
    char str1[81];
    char str2[81];
    char str3[81];
    int val;
    int val2;
    int res;

    printf("Ingrese cadena 1:");
    gets(str1);
    printf("Ingrese cadena 2:");
    gets(str2);

    val = atoi(str1);
    val2 = atoi(str2);

    res = val + val2;

    sprintf(str3,"%d",res);


    puts(str3);

    return 0;
}

