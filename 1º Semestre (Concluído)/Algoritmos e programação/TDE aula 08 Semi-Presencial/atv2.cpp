#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    //Faça um programa para determinar se uma pessoa é maior ou menor de idade.

    float idade;

    printf("Digite sua idade:\n");
    scanf("%f", &idade);

    if (idade >=18)
    {
        printf("Você é maior de idade!\n");
    }
    else if (idade < 18)
    {
        printf("Você ainda não é maior de idade!\n");
    }
    
    return 0;
}