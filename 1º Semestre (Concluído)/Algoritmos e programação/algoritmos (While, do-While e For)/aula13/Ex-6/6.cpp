#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int numero;
    int contador;

    for (contador = 0; contador <5; contador++) {
        printf("Digite um número %d\n", contador+1);
        scanf("%d", &numero);

        if (numero==0) {
            printf("NULO\n",numero);
         }
         else if (numero>0) {
             printf("POSITIVO\n", numero);
         }
         else if (numero < 0)
         {
             printf("NEGATIVO\n", numero);
         }
         
         }
    }
//Efetue um programa que leia 5 números. Para cada número fornecido, escrever se ele é NULO, NEGATIVO ou POSITIVO.

