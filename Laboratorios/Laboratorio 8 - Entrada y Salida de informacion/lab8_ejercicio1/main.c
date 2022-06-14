#include <stdio.h>

int main(void)
{
    char ch;

    while ( (ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        putchar(ch);

    }

    printf("\n\n");

        return 0;
}

