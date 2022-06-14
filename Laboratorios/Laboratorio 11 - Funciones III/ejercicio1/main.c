#include <stdio.h>

char entrada[80] = "\n\nHola UTN!";

void funcionrec (int posicion)
{
    if(entrada[posicion]==0)
    return;

    funcionrec(posicion+1);
    printf("%c", entrada[posicion]);
}

int main(void)
{
    funcionrec(0);
    return 0;
}

