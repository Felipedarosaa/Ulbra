#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float salAtual, vlrAumento, novoSal;

    printf("Digite o seu salário:R$\n");
    scanf("%f", &salAtual);

    if (salAtual < 300) {
        printf("Seu aumento foi de 15 porcento\n");

        vlrAumento = (salAtual*15)/100;
        novoSal = (salAtual*15)/100 + salAtual;
        printf("O valor do aumento é: R$%.2f\n", vlrAumento);
        printf("O seu novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salAtual > 300 && salAtual <= 600) {
        printf("Seu aumento foi de 10 porcento\n");

        vlrAumento = (salAtual*10)/100;
        novoSal = (salAtual*10)/100 + salAtual;
        printf("O valor do aumento é: R$%.2f\n", vlrAumento);
        printf("O seu novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salAtual > 600 && salAtual <= 900) {
        printf("Seu aumento foi de 5 porcento\n");

        vlrAumento = (salAtual*5)/100;
        novoSal = (salAtual*5)/100 + salAtual;
        printf("O valor do aumento é: R$%.2f\n", vlrAumento);
        printf("O seu novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salAtual > 900) {
        printf("Você não teve aumento, sinto muito!\n");
    }
    
    return 0;
}