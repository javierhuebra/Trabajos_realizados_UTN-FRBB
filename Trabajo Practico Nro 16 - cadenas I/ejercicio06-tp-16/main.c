#include <stdio.h>
#include <string.h>
#include <time.h>
#define n 4
void aleatorio(char *a[n])
{
    int i,ale1,ale2;
    char *temp;

        for(i=0;i<100;i++)
        {
            ale1 = rand() % 4;
            ale2 = rand() % 4;
        }
    temp = a[ale1];
    a[ale1] = a[ale2];
    a[ale2] = temp;
}
int comparar(char str[81],char resp[81])
{
    const char* respCorrecta = resp;

    if(strcmp(str,respCorrecta) == 0)
        return 0;
    else
        return -1;
}

int main(void)
{
    srand(time(NULL));
    char nombre[81];
    char respuesta[81];
    const char *saludo = "HOLA, Ingrese su nombre:";
    char inc[81] = "ERROR, Respuesta Incorrecta ";
    char cor[81] = "Muy Bien, Correcto. usted sabe de Cuatriciclos!!";

    const char *pregunta = "Que empresa japonesa es la que fabrica el Quad TRX 450?\n";
    const char *resp[n] = {
        "Yamaha",
        "Suzuki",
        "Honda",
        "Ninguna de las anteriores"
    };
    const char *opcion[n] = {
        "a",
        "b",
        "c",
        "d"
    };
    int i, res;
    char* presp[n];
    char* popc[n];

    for(i=0;i<n;i++)
    {
        presp[i] = resp[i];
    }
    puts(saludo);
    gets(nombre);
    printf("\n");
    puts(pregunta);

    aleatorio(presp);

    for(i=0;i<n;i++)
    {
        popc[i] = presp[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%s %s \n\n",opcion[i],presp[i]);
    }
    puts("Opci\242n:");
    gets(respuesta);
    puts("");

    for(i=0;i<n;i++)
    {
        if(strcmp(respuesta,opcion[i])==0)
            res = comparar(presp[i],"Honda");
    }

    if(res == 0)
    {
        printf("%s %s\n\n",nombre,cor);
    }
    else
        printf("%s %s\n\n",nombre,inc);

    return 0;
}
