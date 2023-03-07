#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int contador;

    for (contador = 20; contador >0; contador--) //equivale a ordem Decrescente//
    {
        printf("%d\n", contador);
    }
}
//Faça um programa que escreva os números de 1 a 20, em ordem decrescente.