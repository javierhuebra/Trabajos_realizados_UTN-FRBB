#include <stdio.h>
char c;

void dibujarArania(char c)
{
    printf("    %c      %c      %c \n",c,c,c);
    printf("    %c      %c      %c \n",c,c,c);
    printf("     %c     %c     %c \n",c,c,c);
    printf("      %c    %c    %c \n",c,c,c);
    printf("        %c  %c  %c \n",c,c,c);
    printf("       %c%c%c%c%c%c%c%c%c\n",c,c,c,c,c,c,c,c,c);
    printf("        %c  %c  %c \n",c,c,c);
    printf("      %c    %c    %c \n",c,c,c);
    printf("     %c     %c     %c \n",c,c,c);
    printf("    %c      %c      %c \n",c,c,c);
    printf("    %c      %c      %c \n",c,c,c);
}

int main(void)
{

    printf(" Ingrese un caracter:   ");     scanf("%c", &c);
    printf("\n\n");
    dibujarArania(c);
    printf("\n");

    return 0;
}

