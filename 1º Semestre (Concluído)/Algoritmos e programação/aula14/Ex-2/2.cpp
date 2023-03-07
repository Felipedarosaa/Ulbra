#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int n;

    do
    {
    printf("Digite o valor a ser testado:\n");
    scanf("%d%*c", &n);
    if (n>0) {
        printf("Valor Positivo\n");
    }else if (n<0) {
        printf("Valor Negativo\n");
    }
    } while (n!=0);
}
//Faça um programa para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, escrever se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem escrever mensagem alguma.
