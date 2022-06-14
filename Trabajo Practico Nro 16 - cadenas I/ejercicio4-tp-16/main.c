#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <colordlg.h>

int main(void)
{
    char* strSonLas = "Son las";
    char* strHoras = "horas y";
    char* strMinutos = "minutos. \n";

    const char *horas[] = {
        "cero", "una", "dos",
        "tres", "cuatro", "cinco",
        "seis", "siete", "ocho",
        "nueve", "diez", "once",
        "doce", "trece", "catorce",
        "quince", "dieciseis", "diecisiete",
        "dieciocho", "diecinueve", "veinte",
        "veintiuno", "veintidos", "veintitres"
    };
    const char *minutos[] = {
        "cero", "uno", "dos","tres","cuatro", "cinco",
        "seis", "siete", "ocho","nueve", "diez", "once",
        "doce", "trece", "catorce","quince", "dieciseis", "diecisiete",
        "dieciocho", "diecinueve", "veinte","ventiuno", "ventidos", "ventitres",
        "venticuatro","veinticinco", "ventiseis","ventisiete", "ventiocho", "ventinueve",
        "treinta","treinta y uno","treinta y dos","treinta y tres","treinta y cuatro",
        "treinta y cinco","treinta y seis","treinta y siete","treinta y ocho",
        "treinta y nueve","cuarenta","cuarenta y uno","cuarenta y dos","cuarenta y tres",
        "cuarenta y cuatro","cuarenta y cinco","cuarenta y seis","cuarenta y siete",
        "cuarenta y ocho","cuarenta y nueve","cincuenta","cincuenta y uno",
        "cincuenta y dos","cincuenta y tres","cincuenta y cuatro","cincuenta y cinco",
        "cincuenta y seis","cincuenta y siete","cincuenta y ocho","cincuenta y nueve",
    };

    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[81];
    char *pHoras;
    int hora,min;

    strftime(output,81,"%H:%M",tlocal);

    pHoras = strtok(output,":");

    hora = atoi(pHoras);

    pHoras = strtok(NULL,":");

    min = atoi(pHoras);

    printf("\t\t %s %s %s %s %s \n",strSonLas,horas[hora],strHoras,minutos[min],strMinutos);

    return 0;
}
