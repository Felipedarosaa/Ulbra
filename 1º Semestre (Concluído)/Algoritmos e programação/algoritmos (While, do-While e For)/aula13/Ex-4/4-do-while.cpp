#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i=0;
    float nota,soma,media;
    soma=0;
    
    do {
        printf("Digite a nota %d:\n", i+1);
        scanf("%f", &nota);
        soma=nota+soma;
        i++;
    } while (i<10);
    media=(soma/10);
    printf("A média é: %.f\n", media);
}
//Efetue um programa que leia a nota de 10 alunos de uma turma. Ao final, deve ser escrita a média geral da turma. Esse algoritmo deve ser feito duas vezes uma usando o FOR, e DO-WHILE



