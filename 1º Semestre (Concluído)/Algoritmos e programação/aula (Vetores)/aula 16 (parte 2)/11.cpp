#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int numeros[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %.dº número:\n", i + 1);
        scanf("%d%*c", &numeros[i]);
    }

    printf("Os números pares são: ");
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("(%.d)", numeros[i]);
        }
    }
    printf("\nOs números ímpares são: ");
    for (j = 0; j < 10; j++)
    {
        if (numeros[j] % 2 == 1)
        {
            printf("(%.d)", numeros[j]);
        }
    }

    return 0;
}