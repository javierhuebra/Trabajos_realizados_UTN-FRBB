#include <stdio.h>

int fibonaccirec( int n)
{
    if(n==0 || n==1)
    return 1;
    else

    return (fibonaccirec(n-1) + fibonaccirec(n-2));
}

int fibonacci_ite(int n)
{
    int fmenos1 = 0;
    int fmenos2 = 1;
    int f=0;
    int i=0;

    if(n==0 || n==1)
    return 1;

    i=0;
    while(i<=n)
      {
        f = fmenos1 + fmenos2;
        fmenos2 = fmenos1;
        fmenos1 = f;
        i++;
      }
    return f;
}

int main(void)
{
    int n=0;
    printf(" Ingrese el valor de n:  ");
    scanf("%d", &n);
    printf("\n\n");

    fibonaccirec(n);
    fibonacci_ite(n);

    printf(" La serie de fibonacci recursivo con n = %d es  %d\n", n, fibonaccirec(n));

    printf(" La serie de fibonacci iterativo con n = %d es  %d\n\n", n, fibonacci_ite(n));

    return 0;
}

