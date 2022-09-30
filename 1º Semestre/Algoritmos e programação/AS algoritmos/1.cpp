#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int numeros[10], i, referencia, conta = 0, menores = 0, iguais = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Qual o %dº valor?\n ", i + 1);
        scanf("%d%*c", &numeros[i]);
    }
    printf("\nQual o valor de referência desejado:\n");
    scanf("%d%*c", &referencia);

    for (i = 0; i < 10; i++)
        if (numeros[i] > referencia)
            conta++;
        else if (numeros[i] < referencia)
            menores++;
        else
            iguais++;

    if (referencia > 0)
    {
        printf("\nOs valores maiores que a referência são:\n");
        for (i = 0; i < 10; i++)
            if (numeros[i] > referencia)
                printf("%d\n", numeros[i]);
    }
    else
        printf("\nNão existem valores maiores que a referencia\n");

    if (menores > 0)
        printf("\nExistem %d valores menores que a referência\n", menores);
    else
        printf("\nNão existem valores menores que a referência\n");

    if (iguais > 0)
        printf("\nExistem %d valores iguais ao da referência\n", iguais);
    else
        printf("\nNão existem valores iguais ao da referência\n");
}

// 1-Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e:
//  a) imprima os números do vetor que são maiores que o valor referência
//  b) retorne quantos números armazenados no vetor são menores que o valor de referência
//  c) retorne quantas vezes o valor de referência aparece no vetor
