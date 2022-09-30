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
    char sobrenome[] = "Rosa";
    char meio[] = {'D', 'a'};
    char nomeCompleto[20];

    printf("Digite o nome:");
    gets(nome);

    printf("%s %s", nome, sobrenome);

    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("\nSeu nome completo é: %s\n", strupr(nomeCompleto));
}

// FUP que leia o nome e o sobrenome de uma pessoa em duas variáveis distintas, o programa deve armazenar os dois valores uma terceira variável.