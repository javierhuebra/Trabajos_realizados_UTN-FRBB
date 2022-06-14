#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char palo;
    int valor;

}Carta;


int main()
{
    FILE *fp;
    FILE *fp2;

    char *nombre= "cartas.bin";
    char *nombre2= "cartas-mezcladas.bin";
    Carta mazo[50];
    int i,pos1,pos2;
    srand(time(NULL));
    int n=0;
    Carta temp;

    fp=fopen(nombre,"rb");
    if(fp==NULL)
        printf("ERROR \n");
    fread(mazo,sizeof(Carta),50,fp);
    for(i=0;i<50;i++)
    {
        printf("%c %d\n",mazo[i].palo,mazo[i].valor);

    }

    printf("\n\n");
    while(n<1000)
    {
        n++;
        pos1=rand()%50;
        pos2=rand()%50;

        temp.palo=mazo[pos1].palo;
        mazo[pos1].palo=mazo[pos2].palo;
        mazo[pos2].palo=temp.palo;

        temp.valor=mazo[pos1].valor;
        mazo[pos1].valor=mazo[pos2].valor;
        mazo[pos2].valor=temp.valor;

    }
    for(i=0;i<50;i++)
    {
        printf("%c %d\n",mazo[i].palo,mazo[i].valor);

    }
    fclose(fp);
    printf("\n\n");

    fp2=fopen(nombre2,"wb");
    if(fp2==NULL)
        printf("ERROR \n");

    fwrite(mazo,sizeof(Carta),50,fp2);
     fclose(fp2);

    fp2=fopen(nombre2,"rb");
    if(fp==NULL)
        printf("ERROR \n");

    fread(mazo,sizeof(Carta),50,fp);
    for(i=0;i<50;i++)
    {
        printf("%c %d\n",mazo[i].palo,mazo[i].valor);

    }
    fclose(fp2);


    return 0;
}

