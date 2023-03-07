#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vetor[10];
    int i;
   
    for (i = 0; i < 10; i++) {
        printf("Digite os valores:\n", i);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int posMaior = 0;

    printf("O vetor é: %d\n", vetor[0]);

    for (i = 1; i < 10; i++) {
        printf("Valores digitados: %d\n", vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
    }
    printf("O maior elemento é %.d, localizado na posição %.d (indice %d)\n", maior, posMaior+1, posMaior);

    system("pause");
    return 0;
}

//Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima  o vetor, o maior elemento e a posição em que ele se encontra. 