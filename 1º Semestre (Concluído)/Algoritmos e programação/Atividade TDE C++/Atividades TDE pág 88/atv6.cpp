#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, opcao, elevar, raizQ, raizQ2, raizC, raizC2;

    printf("1-O primeiro número elevado ao segundo número\n");
    printf("2-Raíz quadrada de cada um dos números\n");
    printf("3-Raíz cúbica de cada um dos números\n");
    printf("Qual sua opção?\n");
    scanf("%f", &opcao);

    if (opcao > 3)
    {
        printf("Opção Inválida!\n");
    }

    if (opcao == 1)
    {
        printf("Você escolheu a opção 1\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);
        
        elevar = pow(n1,n2);
        printf("O primeiro número elevado ao segundo é: %.f\n", elevar);
    }
    else if (opcao == 2) {
        printf("Voce escolheu a opção 2\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        raizQ = sqrt(n1);
        raizQ2 = sqrt(n2);
        printf("A raíz quadrada do primeiro número é: %.f\n", raizQ);
        printf("A raíz quadrada do segundo número é: %.f\n", raizQ2);        
    }
    else if (opcao == 3)
    {
        printf("Você escolheu a opção 3\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        raizC = cbrt(n1);
        raizC2 = cbrt(n2);
        printf("A raíz cúbica do primeiro número é: %.f\n", raizC);
        printf("A raíz cúbica do segundo número é: %.f\n", raizC2);
    }
    
    return 0;
}