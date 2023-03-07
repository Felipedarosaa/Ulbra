#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vetor[15], i;

    for (i = 0; i < 15; i++) {
        printf("Digite o %.dº número:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 15; i++) {
        if (vetor[i]==30) {
            printf("Na posição %.d tem um número 30\n", i+1);
        }
    }

    return 0;
}