#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[15];
    int i, maior, posMaior, menor, posMenor;

    for (i = 0; i < 15; i++)
    {
        printf("Digite o %.dº número:\n");
        scanf("%d%*c", &vetor[i]);
    }

    maior = vetor[0];
    posMaior = 0;
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posMaior = i;
        }
    }

    menor = vetor[0];
    posMenor = 0;
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("Vetores: ");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n------------------------------------------\n");
    printf("O menor número é %.d e está na posição %.d\n", menor, posMenor + 1);
    printf("O maior número é %.d e está na posição %.d\n", maior, posMaior + 1);

    return 0;
}