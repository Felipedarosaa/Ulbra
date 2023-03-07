#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float opcao, rendMensal, valorInves, valorTotal;

    printf("1-Poupança\n");
    printf("2-Fundos de Renda Fixa\n");
    printf("Qual sua opção?\n");
    scanf("%f", &opcao);

    if (opcao == 1) {
        printf("Você selecionou a opção 1\n");
        printf("Digite o valor do seu investimento: R$\n");
        scanf("%f", &valorInves);

        rendMensal = valorInves*3/100;
        valorTotal = valorInves*3/100 + valorInves;

        printf("O valor de rendimento mensal com esse investimento é: R$%.2f\n", rendMensal);
        printf("O valor total com o investimento e o rendimento fica: R$%.2f\n", valorTotal);
    }
    else if (opcao == 2) {
        printf("Você selecionou a opção 2\n");
        printf("Digite o valor do seu investimento: R$\n");
        scanf("%f", &valorInves);

        rendMensal = valorInves*4/100;
        valorTotal = valorInves*4/100 + valorInves;

        printf("O valor de rendimento mensal com esse investimento é: R$%.2f\n", rendMensal);
        printf("O valor total com o investimento e o rendimento fica: R$%.2f\n", valorTotal);
        
    }
    
    return 0;
}