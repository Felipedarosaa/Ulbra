#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[6], i, par = 0, impar = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %.dº número:\n", i + 1);
        scanf("%d%*c", &vetor[i]);
    }

    // numeros pares
    printf("Números Pares:\n");
    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("(%.d)", vetor[i]);
            par++;
        }
    }
    printf("\nE a quantidade de números pares é: %.d\n", par);

    printf("\n!----------------------------------------!\n");

    // numeros impares
    printf("\nNúmeros ímpaes:\n");
    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 1)
        {
            printf("(%.d)", vetor[i]);
            impar++;
        }
    }
    printf("\nE a quantidade de números ímpares é: %.d\n", impar);

    return 0;
}
