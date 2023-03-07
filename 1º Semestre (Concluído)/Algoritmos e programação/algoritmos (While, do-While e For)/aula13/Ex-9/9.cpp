#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int numero, contador;

        printf("Digite um número de 1 à 10:\n");
        scanf("%d", &numero);

        printf("Tabuada do %d!\n", numero);
     for (contador = 0; contador < 11; contador++) {
        printf("%d x %d = %d\n", numero, contador, numero*contador);
    }
}
//Elabore um programa que escreva a tabuada de um número qualquer.