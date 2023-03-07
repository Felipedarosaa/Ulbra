#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int nota[15];
    int i, soma=0;
    float media=0;

    for (i = 0; i < 15; i++) {
        printf("Digite a nota %d\n", i+1);
        scanf("%d%*c", &nota[i]);
        soma=soma+nota[i];
    }
    
    media = soma/15;
    printf("A média geral é: %.f\n", media);

    system("pause");
    return 0;
}

// Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
