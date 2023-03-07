#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>
#include <time.h>
#include <ctime>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float  dia, mes, ano, hora, min;

    time_t data_tempo;
    time(&data_tempo);

    struct tm*tempo=localtime (&data_tempo);

    printf("Informe a data atual:\n");
    scanf("%f%f%f", &dia, &mes, &ano);
    printf("Data Atual: %.f/%.f/%.f\n", dia, mes, ano);
    
   if (mes == 1) {
    printf("JANEIRO.\n");
   }
   else if (mes == 2) {
    printf("FEVEREIRO.\n");
   }
   else if (mes== 3) {
    printf("MARÇO.\n");
   }
   else if (mes == 4) {
    printf("ABRIL.\n");
   }
   else if (mes == 5) {
    printf("MAIO.\n");
    }
   else if (mes == 6) {
    printf("JUNHO.\n");
    }
   else if (mes == 7) {
    printf("JULHO.\n");
    }
   else if (mes == 8) {
    printf("AGOSTO.\n");
    }
   else if (mes == 9) {
    printf("SETEMBRO.\n");
    }
   else if (mes == 10) {
    printf("OUTUBRO\n");
    }
   else if (mes == 11) {
    printf("NOVEMBRO.\n");
    }
   else if (mes == 12) {
    printf("DEZEMBRO.\n");
    }
    else{
    printf("Não é um número válido!");
    }

    hora = tempo -> tm_hour;
    min = tempo -> tm_min;


    printf("Hora Atual: %.f:%.f\n", hora, min);

    return 0;
}
