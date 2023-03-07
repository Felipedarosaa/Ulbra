#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int valores[50], i;

    for (i = 0; i < 50; i++)
    {
        printf("Digite os valores: \n");
        scanf("%d%*c", &valores[i]);
    }
    printf("Valores positivos: ");
    for (i = 0; i < 50; i++)
    {
        if (valores[i] > 0)
        {
            printf("%.d ", valores[i]);
        }
    }

    return 0;
}