#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float n1, n2, n3, resultado;

    printf("digite o primeiro número\n");
    scanf("%f", &n1);

    printf("diigte o segundo número\n");
    scanf("%f", &n2);

    printf("digite o terceiro número\n");
    scanf("%f", &n3);

    resultado = (n1*n2*n3);

    printf("o resultado da multiplicação é: %.2f\n", resultado);

    return 0;
}