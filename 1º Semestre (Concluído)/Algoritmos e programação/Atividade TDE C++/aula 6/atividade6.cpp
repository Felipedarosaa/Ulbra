#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salFixo, comissao, valorVenda, salFinal;

    printf("digite o salario fixo do funcionario \n");
    scanf("%f", &salFixo);

    printf("digite o valor de suas vendas \n");
    scanf("%f", &valorVenda);

    comissao =(salFixo*4/100);
    salFinal = (salFixo+comissao+valorVenda);

    printf("o salário final do funcionário é: %.2f\n", salFinal);

    return 0;
}
