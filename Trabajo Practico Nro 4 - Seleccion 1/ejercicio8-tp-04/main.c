/* Este es el programa Calculador de plazos fijos
 * Ejercicio 8 del trabajo practico numero 4
 * Jonathan Romulo*************************/

#include <stdio.h>

int main(void)
{
    int monto;
    int plazo;
    double valor_final;

//Comienzo del programa!

    printf("Ingrese el valor de monto a depositar: \n\n");
    printf("    monto: ");      scanf("%d", &monto);
    printf("\nIngrese el plazo: \n\n");
    printf("    plazo: ");      scanf("%d", &plazo);
    printf("\n");

    if(monto >0 && plazo >0)
{
//Condiciones para la primer columna

    if(monto <1000 && plazo <=3)
{
        valor_final = (monto * 0.02 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
    if((monto >=1000 && monto <10000) && plazo <=3)
{
        valor_final = (monto * 0.03 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
    if(monto >=10000 && plazo <=3)
{
        valor_final = (monto * 0.04 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
//Condiciones para la segunda columna

    if(monto <1000 && (plazo >3 && plazo <=6))
{
        valor_final = (monto * 0.03 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
    if((monto >=1000 && monto <10000) && (plazo >3 && plazo <=6))
{
        valor_final = (monto * 0.04 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
    if(monto >=10000 && (plazo >3 && plazo <=6))
{
        valor_final = (monto * 0.05 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
//Condiciones para la tercer columna

    if(monto <1000 && (plazo >6 && plazo <=12))
{
        valor_final = (monto * 0.04 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
    if((monto >=1000 && monto <10000) && (plazo >6 && plazo <=12))
{
        valor_final = (monto * 0.05 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}
    if(monto >=10000 && (plazo >6 && plazo <=12))
{
        valor_final = (monto * 0.06 * plazo)+(monto);
    printf("El valor final es $ %lf \n\n", valor_final);
}

}
    else
        printf("ERROR \n");
    return 0;
}

