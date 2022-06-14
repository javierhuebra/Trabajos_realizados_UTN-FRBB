#include <stdio.h>
#include <time.h>

int main(void)
{
    int nro1 = 0;
    int nro2 = 0;
    int nro3 = 0;
    int nro4 = 0;
//********************************************************
    srand (time(NULL));
//********************************************************

    nro1 = rand()%1000 + 1;
    printf(" El primer numero es:       %d\n\n", nro1);

    nro2 = rand()%1000+1;
    printf(" El segundo numero es:      %d\n\n", nro2);

    nro3 = rand()%1000+1;
    printf(" El tercer numero es:       %d\n\n", nro3);

    nro4 = rand()%1000+1;
    printf(" El cuarto numero es:       %d\n\n", nro4);
//*********************************************************
    printf("*********************************************** \n\n");

    if(nro1>nro2)
    {
        if(nro1>nro3)
          {
            if(nro1>nro4)

                printf(" El mayor numero es el primero:     %d \n\n", nro1);
            else
                printf(" El mayor es el cuarto:     %d \n\n", nro4);
          }
        else if(nro3>nro4)

                printf(" El mayor numero es el tercero:     %d \n\n", nro3);
             else
                printf(" El mayor numero es el cuarto:      %d \n\n", nro4);
     }
    else if(nro2>nro3)
         {
            if(nro2>nro4)

                printf(" El mayor numero es el segundo:     %d \n\n", nro2);
            else
                printf(" El mayor numero es el cuarto:      %d \n\n", nro4);
         }
        else if(nro3>nro4)

        printf(" El mayor numero es el tercero:     %d \n\n", nro3);

             else
                printf(" El mayor numero es el cuarto:      %d \n\n", nro4);

    return 0;
}
