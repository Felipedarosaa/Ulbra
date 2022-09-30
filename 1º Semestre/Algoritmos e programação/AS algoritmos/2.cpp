#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <time.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int i, controle = 0;
    int n;
    int vet[10];

    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
        printf("Numero %d: %d\n", i+1, vet[i]);
    }

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        if (n == vet[i])
        {
            printf("Está no vetor na posição %d", i+1);
            controle = 1;
            break;
        }
    }
    if (!controle)
        printf("Não está no vetor");
}

// Escreve um programa que sorteio, aleatoriamente, 10 números e armazene estes em um vetor.
// Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.
