#include <stdio.h>
#include <math.h>
#include <windows.h>

int main ()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salMinimo, salario, total;

    printf("digite o valor do salário mínimo\n");
    scanf("%f", &salMinimo);

    printf("digite o valor do salário do funcionário\n");
    scanf("%f", &salario);

    total = (salario/salMinimo);

    printf("A quantidade de salários mínimos é: %.2f\n", total);

    return 0;
}
