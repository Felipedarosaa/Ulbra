#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float precoP, novoP, desconto;

    printf("digite o preço do produto\n");
    scanf("%f", &precoP);

    desconto = (precoP*10/100);
    novoP = (precoP-desconto);

    printf("o preço do produto ficou em: %.2f\n", novoP);

    return 0;
}