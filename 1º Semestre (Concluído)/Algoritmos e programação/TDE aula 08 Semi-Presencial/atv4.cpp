#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    //Faça um programa para ler dois números. Se os números forem iguais imprimir a mensagem: "NÚMEROS IGUAIS" e encerrar a execução; caso contrário, imprimir o de maior valor.

    float n1, n2;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);
    printf("Digite o segundo número:\n");
    scanf("%f", &n2);

    if (n1 == n2)
    {
        printf("NÚMEROS IGUAIS\n");
    }
    else if (n1 > n2)
    {
        printf("O primeiro número é maior!\n");
    }
    else if (n2 > n1)
    {
        printf("O segundo número é maior!\n");
    }
    
    return 0;
}