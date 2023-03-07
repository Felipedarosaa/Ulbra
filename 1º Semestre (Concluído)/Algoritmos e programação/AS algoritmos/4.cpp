#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[5], i, codigo=0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor:\n", i+1);
        scanf("%d%*c", &vetor[i]);
    }
    
    printf("Digite o codigo desejado:\n");
    scanf("%d%*c", &codigo);

    if (codigo == 0) {
        printf("Código Encerrado...\n");
    }
    else if (codigo == 1) {
        for (i = 0; i < 5; i++) {
            printf("Ordem Direta: %d\n", vetor[i]);
        }
    }
    else if (codigo == 2) {
        for (i = 4; i > 0; i--) {
            printf("Ordem Inversa: %d\n", vetor[i]);
        }
    } 
    else if (codigo > 2) {
        printf("Código Inválido\n");
    }
    
    return 0;
}

// Faça um programa que leia um vetor de 5 posições para  números reais e, depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem  direta; se for 2, mostre o vetor na ordem inversa. Caso, o código diferir de 1 e 2  escreva uma mensagem informando que o código  e inválido. 