#include <stdio.h>

double tempfahr;
double convcent (double tempfahr);
double y;

double convcent (double tempfahr)
{
    double res;
    res = (tempfahr-32.0) * 5.0/9.0;
    return res;
}

int main(void)
{
    printf("Ingrese el valor de grados Fahrenheit:  ");
    scanf(" %lf", &tempfahr);
    printf("\n\n");

    y = convcent(tempfahr);

    printf("Fahrenheit:  %lf \n\n", tempfahr);
    printf("Grados Centigrados:  %lf \n\n", y);

    return 0;
}

