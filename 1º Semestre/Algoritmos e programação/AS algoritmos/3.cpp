#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int num[10], i = 0, j = 0, repetir;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++)
    {
        printf("[%i]", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Números repetidos:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[j] == num[i])
            {
                repetir = num[i];
                printf("%d\n", repetir);
            }
        }
    }
    return 0;
}

// Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais  e os escreva na tela