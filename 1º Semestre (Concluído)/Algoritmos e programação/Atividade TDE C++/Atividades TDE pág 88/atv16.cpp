#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float precoAtual, novoPreco, preco;

        printf("Digite o valor do produto: R$\n");
        scanf("%f", &precoAtual);

    if (precoAtual < 30) {
        printf("Você não ganhou desconto!\n");
    }
    else if (precoAtual >= 30 && precoAtual <= 100) {
        printf("Você ganhou 10 porcento de desconto!\n");
        novoPreco = precoAtual-precoAtual*10/100;
        printf("O valor com o desconto fica: R$%.2f\n", novoPreco);
    }
    else if (precoAtual > 100) {
        printf("Você ganhou 15 porcento de desconto!\n");
        novoPreco = precoAtual-precoAtual*15/100;
        printf("O valor com o desconto fica: R$%.2f\n", novoPreco);
    }

    return 0;
}