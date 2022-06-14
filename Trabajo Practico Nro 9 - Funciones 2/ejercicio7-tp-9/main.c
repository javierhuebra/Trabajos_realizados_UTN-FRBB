#include <stdio.h>
#include <time.h>
#include <windows.h>

void timer (void);

int main(void)
{
    int i=0;
    for(i=0; i<20; i++)
    {
        timer();
        sleep(.001);
    }
    printf("\n\n");
    return 0;
}

void timer()
{
    static int tiempoAnterior=0;
    static int tiempoEjecucion=0;

    tiempoEjecucion = clock();
    tiempoAnterior = tiempoEjecucion - tiempoAnterior;

    printf(" Tiempo de ejecuci\242n [ms] = %d\n", tiempoEjecucion);
    printf(" Tiempo entre la ultima ejecuci\242n [ms] = %d\n", tiempoAnterior);
}
