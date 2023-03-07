#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float precoProduto, novoPreco, classif;

    printf("Digite o preço do produto: R$\n");
    scanf("%f", &precoProduto);

    if (precoProduto < 50) {
        printf("O aumento porcentual foi de 5 porcento\n");        
    }
    else if (precoProduto >= 50 && precoProduto <= 100) {
        printf("O aumento porcentual foi de 10 porcento\n");
    }
    else if (precoProduto > 100) {
        printf("O aumento porcentual foi de 15 porcento\n");
    }

    if (precoProduto < 80) {
        printf("Classificação: Barato\n");
    }
    else if (precoProduto >= 80 && precoProduto < 120) {
        printf("Classificação: Normal\n");
    }
    else if (precoProduto > 120 && precoProduto <= 200) {
        printf("Classificação: Caro\n");
    }
    else if (precoProduto > 200)
    {
         printf("Classificação: Muito Caro\n");
    }
                                                                                                                                                    
    return 0;
}    