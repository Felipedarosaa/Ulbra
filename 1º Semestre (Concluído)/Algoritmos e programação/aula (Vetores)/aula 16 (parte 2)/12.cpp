#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int valores[5];
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %.dº valor:\n", i + 1);
        scanf("%d%*c", &valores[i]);
        printf("Valor Digitado: %d\n", valores[i]);
    }
    printf("\nOs números digitados foram: ");
    for (int i = 0; i < 5; i++)
    {
        soma = soma + valores[i];
        printf("\n%.d", valores[i]);
    }
    printf("\nA soma é = %.d\n", soma);

    return 0;
}