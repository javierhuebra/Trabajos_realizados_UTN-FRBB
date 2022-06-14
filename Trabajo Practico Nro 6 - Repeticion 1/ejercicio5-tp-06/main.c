#include <stdio.h>
#include <time.h>

int main(void)
{
    int nrosec;
    int valor = 0;
    int intentos = 4;
    int intento = 0;
    int reset = 0;
    srand (time(NULL));
//****************************************************

    nrosec = rand() % 100;
    if(nrosec > 50)
        nrosec = nrosec % 50 * (-1);
    else
        nrosec = nrosec;

    while(reset == 0 && intentos > 0)
{
    printf("Indique el valor del 'Numero Secreto' entre -50 y +50:      ");
    scanf("%d", &valor);
    printf("\n\n");

    if(nrosec == valor)
     {
       reset = 1;
       intento ++;
       intentos --;
     }
    else if(nrosec > valor)
          {
          printf(" Muy bajo, pruebe con un numero mas alto \n\n");
          intento ++;
          intentos --;
          }
         else
          {
          printf(" Muy alto, pruebe con un numero mas bajo \n\n");
          intento ++;
          intentos--;
          }
}
    if(reset == 1)

        printf("Muy bien!!! Lo encontraste con solo %d intentos!\n\n", intento);

    else if(intentos == 0)

    printf(" Lo siento, perdiste.\n\n");

    return 0;
}

