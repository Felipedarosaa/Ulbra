#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetA[10];
    int vetB[10];
    int vetC[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número (a):", i + 1);
        scanf("%d", &vetA[i]);
    }

    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número (b):", i + 1);
        scanf("%d", &vetB[i]);
    }

    printf("\n");
    for (i = 0; i < 10; i++)
    {
        vetC[i] = vetA[i] - vetB[i];
        printf("Vetor A - Vetor B é igual: %d\n", vetC[i]);
    }
}

// Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na /////tela os dados do vetor C.