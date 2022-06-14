#include <stdio.h>

int main(void)
{
    //Declaracion de variables

    int botellas_de_vino;
    int botellas_de_cerveza;
    int botellas_de_whisky;

    //Comienzo del programa

    printf("Botellas de vino: "); scanf("%d", &botellas_de_vino);
    printf("Botellas de cerveza: "); scanf("%d", &botellas_de_cerveza);
    printf("Botellas de Whisky: ");  scanf("%d", &botellas_de_whisky);
    printf("\n");
    printf("Tengo %d razones para estar contento,\n%d para compartir entre amigos,\ny %d para disfrutar en casa. \n", botellas_de_vino, botellas_de_cerveza, botellas_de_whisky);
    printf("\n");

    return 0;
}

