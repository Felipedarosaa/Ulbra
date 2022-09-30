#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char letra1[2];
    char letra2[2];
    char letra3[2];
    char letra4[2];
    char letra5[2];
    char letra6[2];

    printf("Digite uma palavra de 6 letras, porém letra por letra: \n");
    scanf("%s%*c", &letra1);
    printf("2º letra\n");
    scanf("%s%*c", &letra2);
    printf("3º letra\n");
    scanf("%s%*c", &letra3);
    printf("4º letra\n");
    scanf("%s%*c", &letra4);
    printf("5º letra\n");
    scanf("%s%*c", &letra5);
    printf("6º letra\n");
    scanf("%s%*c", &letra6);

    printf("\nA palavra completa fica: %s %s %s %s %s %s\n", strupr(letra1), (letra2), strupr(letra3), (letra4), strupr(letra5), letra6);
}

// FUP que leia uma string e a escreva caracter a caracter, intercalando letras maiúsculas e minúsculas. Por exemplo, lê aula escreve AuLa.//
