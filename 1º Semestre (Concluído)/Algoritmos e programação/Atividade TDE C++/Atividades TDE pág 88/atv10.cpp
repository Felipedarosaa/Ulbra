#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float precoFab, valorTotal;

    printf("Digite o valor do veículo de fábrica:R$\n");
    scanf("%f", &precoFab);

    if (precoFab <= 12000) {
        printf("A porcentagem do distribuidor é de 5 porcento\n");
        

        valorTotal = (precoFab*5)/100 + precoFab;
        printf("O valor total do veículo fica:R$%.2f\n", valorTotal);
    }
    else if (precoFab >= 12000 && precoFab <= 25000) {
        printf("A porcentagem do distribuidor é de 10 porcento\n");
        printf("A porcentagem dos impostos é de 15 porcento\n");

        valorTotal = precoFab*10/100 + precoFab*15/100 + precoFab;
        printf("O valor total do veículo fica:R$%.2f\n", valorTotal);
    }
    else if (precoFab > 25000) {
        printf("A porcentagem do distribuidor é de 15 porcento\n");
        printf("A porcentagem dos impostos é de 20 porcento\n");

        valorTotal = precoFab*15/100 + precoFab*20/100 + precoFab;
        printf("O valor total do veículo fica:R$%.2f\n", valorTotal);
    }
    
    return 0;
}