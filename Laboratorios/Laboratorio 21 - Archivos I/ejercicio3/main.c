#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 18

void ordenar(int a[n])
{
    int i, j, posMin, temp;

    for(i=0;i<n-1;i++)
     {
      posMin = i;

      for(j=i;j<n;j++)
       {
          if(a[j] < a[posMin])
              posMin = j;
       }
      temp = a[posMin];
      a[posMin] = a[i];
      a[i] = temp;
     }
}
int main(void)
{
    FILE* pOrigen;
    FILE* pDestino;

    char ch[81];
    char retorno;
    int num[n];
    int i=0;

    pOrigen = fopen("E:/extra/ejercicio3.txt", "r");

    pDestino = fopen("E:/extra/salida-ejercicio3.txt", "w");

    retorno = fscanf(pOrigen,"%s",ch);
    while(retorno != EOF)
    {
        if(atoi(ch)!= 0)
        {
            num[i] = atoi(ch);
            i++;
        }
        retorno = fscanf(pOrigen,"%s",ch);
    }
    ordenar(num);
    for(i=0;i<n;i++)
    {
        fprintf(pDestino,"%d\n",num[i]);
    }

    fclose(pOrigen);
    fclose(pDestino);
    return 0;
}

