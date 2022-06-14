#include <stdio.h>
#include <windows.h>

void salida (char ch)
{
    static int pos=0;

    if(pos==40)
     {
        sleep(.001);
        putchar('\n');
        pos=0;
     }
    sleep(.001);
    putchar(ch);
    pos++;
}

int main(void)
{
    int i=0;
    for(i=0;i<100;i++)

        salida('#');

    return 0;
}

