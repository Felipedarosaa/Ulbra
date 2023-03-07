#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float salFunc, vlrPorcent, novoSal;

    printf("Digite o salário do funcionário: R$\n");
    scanf("%f", &salFunc);

    if (salFunc <= 300) {
        printf("Seu aumento é de 50 porcento\n");
        vlrPorcent = (salFunc*50)/100;   
        novoSal = (salFunc*50)/100 + salFunc;
        printf("O valor do aumento é: R$%.2f\n", vlrPorcent);
        printf("O novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salFunc > 300 && salFunc <= 500) {
        printf("Seu aumento é de 40 porcento\n");
        vlrPorcent = (salFunc*40)/100;   
        novoSal = (salFunc*40)/100 + salFunc;
        printf("O valor do aumento é: R$%.2f\n", vlrPorcent);
        printf("O novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salFunc > 500 && salFunc <= 700) {
        printf("Seu aumento é de 30 porcento\n");
        vlrPorcent = (salFunc*30)/100;   
        novoSal = (salFunc*30)/100 + salFunc;
        printf("O valor do aumento é: R$%.2f\n", vlrPorcent);
        printf("O novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salFunc > 700 && salFunc <= 800) {
        printf("Seu aumento é de 20 porcento\n");
        vlrPorcent = (salFunc*20)/100;   
        novoSal = (salFunc*20)/100 + salFunc;
        printf("O valor do aumento é: R$%.2f\n", vlrPorcent);
        printf("O novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salFunc > 800 && salFunc <= 1000) {
        printf("Seu aumento é de 10 porcento\n");
        vlrPorcent = (salFunc*10)/100;   
        novoSal = (salFunc*10)/100 + salFunc;
        printf("O valor do aumento é: R$%.2f\n", vlrPorcent);
        printf("O novo salário ficou: R$%.2f\n", novoSal);
    }
    else if (salFunc > 1000) {
        printf("Seu aumento é de 5 porcento\n");
        vlrPorcent = (salFunc*5)/100;   
        novoSal = (salFunc*5)/100 + salFunc;
        printf("O valor do aumento é: R$%.2f\n", vlrPorcent);
        printf("O novo salário ficou: R$%.2f\n", novoSal);
    }

    return 0;
} 