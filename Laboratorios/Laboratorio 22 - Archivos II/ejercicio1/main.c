#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;
    char* archivo="ejercicio-1.txt";
    int posicion, num_bytes;
    char ch;



    fp=fopen(archivo,"rb");

    if(fp==NULL)

        printf("ERROR\n");



    fseek(fp,0L,SEEK_END);
    num_bytes=ftell(fp);

    for(posicion=0;posicion<=num_bytes;posicion++)
    {
        fseek(fp,-posicion,SEEK_END);
        ch=getc(fp);
        if((posicion+1)%2 == 0)
            putchar(ch);
        else
            printf(" ");

    }
    printf("\n");

    fclose(fp);


    return 0;
}

