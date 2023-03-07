#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float salFunc, novoSal;

    printf("Digite o salário do funcionário:\n");
    scanf("%f", &salFunc);

    if (salFunc <= 300)
    {
        printf("Seu aumento foi de 35 pocento\n");

        novoSal = (salFunc*35)/100 + salFunc;
        printf("Seu novo salário é de: R$ %.f\n", novoSal);
    }
    else if (salFunc > 300)
    {
        printf("Sey aumento foi de 15 porcento\n");

        novoSal = (salFunc*15)/100 + salFunc;
        printf("Seu novo salário é de: R$%.f\n", novoSal);
    }
    
    return 0;
}