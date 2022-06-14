#include <stdio.h>

int main(void)
{
    double x=-1.0;
    double y = 0.0;

    printf("\t  X \t | \t Y \t \n");
    printf("___________________________________ \n");

    while(x >=-1.0 && x<=-0.1)
    {
        y = 100.0 * (x+1)/x;

    printf("\t % .2lf \t | \t", x);
    printf(" %5.2lf \n" , y);

    x=x+0.1;
    }
    printf("\t % .2lf \t | \t",x);
    printf("infinito \n");
    x=x+0.1;

    while(x >=0.01 && x<= 1.0)
    {
        y = 100.0 * (x+1)/x;

    printf("\t % .2lf \t | \t", x);

    printf(" %5.2lf \n" , y);

    x=x+0.1;
    }

    printf("\n\n");

    return 0;
}

