#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vetor[10], i=0, menor, maior=0;

    for (i = 0; i < 10; i++) {  
        printf("Digite um número:\n");
        scanf("%d", &vetor[i]);

        if (menor > vetor[i]) {
            menor = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }    
    }
    printf("O menor é: %d\n", menor);
    printf("O maior é: %d\n", maior);
    
    return 0;
}

//Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor. 
