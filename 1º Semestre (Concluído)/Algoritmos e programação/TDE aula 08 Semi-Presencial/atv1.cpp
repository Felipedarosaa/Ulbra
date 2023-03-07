#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    //Faça um programa que leia dois números e some 100 ao maior valor e apresente o resultado.

    float n1, n2, soma;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);
    printf("Digite o segundo número:\n");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        soma = n1+100;
        printf("O maior número é o primeiro, portanto o valor total fica:%.f\n", soma);
    }
    else if (n2 > n1)
    {
        soma = n2+100;
        printf("O maior número é o segundo, portanto o valor total fica:%.f\n", soma);
    }

    return 0;
}
