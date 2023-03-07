#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float salBruto, vlrAjustado;

    printf("Digite o seu salário:R$\n");
    scanf("%f", &salBruto);

        if (salBruto <= 350) {
    printf("Sua gratificação foi de R$100,00\n");
    vlrAjustado = salBruto + 100;
    printf("Seu salário ajustado fica:R$%.2f\n", vlrAjustado);
    }
        else if (salBruto > 350 && salBruto <= 600) {
    printf("Sua gratificação foi de R$75,00\n");
    vlrAjustado = salBruto + 75;
    printf("Seu salário ajustado fica:R$%.2f\n", vlrAjustado);
    }
        else if (salBruto > 600 && salBruto <= 900) {
    printf("Sua gratificação foi de R$50,00\n");
    vlrAjustado = salBruto + 50;
    printf("Seu salário ajustado fica:R$%.2f\n", vlrAjustado);
    }
        else if (salBruto > 900) {
    printf("Sua gratificação foi de R$35,00\n");
    vlrAjustado = salBruto + 35;
    printf("Seu salário ajustado fica:R$%.2f\n", vlrAjustado);
    }
    
    return 0;
}