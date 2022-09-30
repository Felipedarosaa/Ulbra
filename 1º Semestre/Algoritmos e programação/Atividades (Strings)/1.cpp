#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char nome[10];

    printf("Digite o nome: ");
    gets(nome);

    printf("Nome Maiusculo: %s\n", strupr(nome));
}

// Faça um programa(FUP) que leia uma string e a escreva em letras maiúsculas e letras minúsculas