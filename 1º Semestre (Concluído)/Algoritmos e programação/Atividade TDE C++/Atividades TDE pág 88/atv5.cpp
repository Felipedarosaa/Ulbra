#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, media, diferenca, produto, divisao, opcao;



    printf("1-Média entre os números digitados\n");
    printf("2-Diferença do maior pelo menor\n");
    printf("3-Produto entre os números digitados\n");
    printf("4-Divisão do primeiro pelo segundo\n");
    printf("Digite Sua opção:\n");
    scanf("%f", &opcao);

    if (opcao == 1)
    {
        printf("Você escolheu a opção 1\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        media = (n1 + n2)/2;
        printf("A média dos números é: %.f\n", media);
    }

    else if (opcao == 2) {
        printf("Você escolheu a opção 2\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);
    if (n1 > n2) {
            diferenca = n1-n2;
        printf("A diferença do maior pelo menor é: %.f\n", diferenca);
        }
    if (n1 == n2)
        {
        printf("Operação Inválida!\n");
        }
        }

    else if (opcao == 3) {
        printf("Você escolheu a opção 3\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        produto = (n1*n2);
        printf("O produto dos números é: %.f\n", produto);
        }

    else if (opcao == 4) {
        printf("Você escolheu a opção 4\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        divisao = (n1/n2);
        printf("A divisão do primeiro número pelo segundo é: %.f\n", divisao);
    }

    else if (opcao > 4) {
        printf("Opção Inválida!\n");
    }
        
    return 0;
}