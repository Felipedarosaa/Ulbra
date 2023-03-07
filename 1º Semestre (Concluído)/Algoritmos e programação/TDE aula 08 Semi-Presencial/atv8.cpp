#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    //Faça um programa para efetuar a leitura de quatro números e apresentar os números que são divisíveis por 2 e por 3.

    int n1, n2 ,n3, n4;

    printf("Digite o primeiro número:\n");
    scanf("%d", &n1);
    if (n1%2==0 || n1%3 ==0)
    {
       printf("Esse número é divisivel por 2 e por três\n");
    }else{
        printf("Não é múltiplo!\n");
    }

    printf("Digite o segundo número:\n");
    scanf("%d", &n2);

    if (n2%2==0 || n2%3==0)
    {
        printf("Esse número é divisível por 2 e por três\n");
    }else{
        printf("Não é múltiplo!\n");
    }

    printf("Digite o terceiro número:\n");
    scanf("%d", &n3);

    if (n3%2==0 || n3%3==0)
    {
    printf("Esse número é divisível por 2 e por três\n");
    }else{
        printf("Não é múltiplo!\n");
    }

    printf("Digite o quarto número:\n");
    scanf("%d", &n4);

    if (n4%2==0 || n4%3==0)
    {
    printf("Esse número é divisível por 2 e por três\n");
    }else{
        printf("Não é múltiplo!\n");
    }
    
    return 0;
}