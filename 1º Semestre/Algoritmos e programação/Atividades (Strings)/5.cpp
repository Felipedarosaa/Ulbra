#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char nome1[50];
    char nome2[50];
    char nome3[50];
    int tamanho1, tamanho2, tamanho3;

    printf("Digite o 1º nome\n");
    scanf("%s%*c", &nome1);
    printf("Digite o 1º nome\n");
    scanf("%s%*c", &nome2);
    printf("Digite o 1º nome\n");
    scanf("%s%*c", &nome3);

    tamanho1 = strlen(nome1);
    tamanho2 = strlen(nome2);
    tamanho3 = strlen(nome3);

    printf("O nome %s tem %d caracteres. \n", nome1, tamanho1);
    printf("O nome %s tem %d caracteres. \n", nome2, tamanho2);
    printf("O nome %s tem %d caracteres. \n", nome3, tamanho3);
}

// FUP que leia 3 strings e escreva o total de caracteres que cada uma possui.//