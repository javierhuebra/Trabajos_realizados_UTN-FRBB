#include <stdio.h>

int main(void)
{

    double v1x;
    double v1y;
    double v1z;
    double v2x;
    double v2y;
    double v2z;
    double sumax;
    double sumay;
    double sumaz;
    double restax;
    double restay;
    double restaz;
    double escalar;
    double vecx;
    double vecy;
    double vecz;
    int opcion = 0;
    int reset = 0;

    //*******************************************

    while(reset == 0)
{
    printf(" Ingrese el vector 1! \n\n");
    printf(" v1x = ");  scanf("%lf", &v1x);
    printf("\n");
    printf(" v1y = ");  scanf("%lf", &v1y);
    printf("\n");
    printf(" v1z = ");  scanf("%lf", &v1z);
    printf("\n\n");

    printf("Ingrese el vector 2! \n\n");
    printf(" v2x = ");  scanf("%lf", &v2x);
    printf("\n");
    printf(" v2y = ");  scanf("%lf", &v2y);
    printf("\n");
    printf(" v2z = ");  scanf("%lf", &v2z);
    printf("\n\n");

    printf("        CALCULADORA VECTORIAL!! \n\n\n");
    printf("            1.  SUMA\n");
    printf("            2.  RESTA\n");
    printf("            3.  PRODUCTO ESCALAR\n");
    printf("            4.  PRODUCTO VECTORIAL\n\n");

    printf(" Opcion?    ");     scanf("%d", &opcion);
    printf("\n\n");

    switch (opcion)
    {
    case 1: sumax = v1x + v2x;
        sumay = v1y + v2y;
        sumaz = v1z + v2z;
        printf(" Resultado:  %lf i %lf j %lf k \n\n", sumax, sumay, sumaz);break;
    case 2: restax = v1x - v2x;
        restay = v1y - v2y;
        restaz = v1z - v2z;
        printf(" Resultado:  %lf i %lf j %lf k \n\n", restax, restay, restaz);break;
    case 3: escalar = (v1x * v2x) + (v1y * v2y) + (v1z * v2z);
        printf(" Resultado:  %lf \n\n", escalar);break;
    case 4: vecx = (v1y * v2z)-(v2y * v1z);
        vecy = (v1x * v2z)-(v2x * v1z);
        vecz = (v1x * v2y)-(v2x * v1y);
        printf(" Resultado:  %lf i %lf j %lf k \n\n", vecx, vecy, vecz);break;
    default: printf("ERROR \n\n");break;
    }
}
    return 0;
}

