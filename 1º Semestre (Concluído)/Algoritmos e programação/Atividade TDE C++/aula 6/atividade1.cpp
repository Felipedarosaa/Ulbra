#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

float n1, n2, resultado;

printf("digite o primeiro número\n");
scanf("%f", &n1);

printf("digite o segundo número\n");
scanf("%f", &n2);

resultado = (n1 - n2);

printf("a subtração do número um pelo numero dois é: %.2f\n", resultado);

return 0;

}