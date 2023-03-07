#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int numero;
    int contador=0;

    printf("Digite o número 9:\n");
    scanf("%d", &numero);

    printf("Tabuada do 9!\n");
    for (contador = 0; contador <= 10; contador++) {
        printf("%d x %d = %d\n", numero, contador, numero*contador);
    }
}
//Elabore um programa que escreva a tabuada do número 9.