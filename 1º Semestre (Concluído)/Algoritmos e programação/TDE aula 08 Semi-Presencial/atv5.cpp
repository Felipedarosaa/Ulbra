#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    //Faça um programa que lê dois valores e escreve cada um juntamente com a mensagem: “É múltiplo de 2” ou “Não é múltiplo de dois”.

    int n1, n2, multiplos;

    printf("Digite o primeiro número:\n");
    scanf("%d", &n1);

    if (n1%2==0)
    {
        printf("É múltiplo de 2\n");
    }else{
        printf("Não é múltiplo de dois\n");
    }
    
    printf("Digite o segundo número:\n");
    scanf("%d", &n2);

    if (n2%2==0)
    {
        printf("É múltiplo de 2\n");
    }else{
        printf("Não é múltiplo de dois\n");
    }
    
    return 0;
}