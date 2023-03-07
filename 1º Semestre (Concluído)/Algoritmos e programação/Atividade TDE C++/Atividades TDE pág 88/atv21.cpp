#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float precoProd, codigoOrig;

    printf("Digite o código de origem do produto:\n");
    scanf("%f", &codigoOrig);

    if (codigoOrig == 1) {
        printf("Esse código é de procedência do Sul\n");
    }
    else if (codigoOrig == 2) {
        printf("Esse código é de procedência do Norte\n");
    }
    else if (codigoOrig == 3) {
        printf("Esse código é de procedência do Leste\n");
    }
    else if (codigoOrig == 4) {
        printf("Esse código é de procedência do Oeste\n");
    }
    else if (codigoOrig >= 5 && codigoOrig <= 6) {
        printf("Esse código é de procedência do Nordeste\n");
    }
    else if (codigoOrig >= 7 && codigoOrig <= 9) {
        printf("Esse código é de procedência do Sudeste\n");
    }
    else if (codigoOrig >= 10 && codigoOrig <= 20) {
        printf("Esse código é de procedência do Centro-Oeste\n");
    }
    else if (codigoOrig >= 21 && codigoOrig <= 30) {
        printf("Esse código é de procedência do Noroeste\n");
    }
    
    return 0;
}