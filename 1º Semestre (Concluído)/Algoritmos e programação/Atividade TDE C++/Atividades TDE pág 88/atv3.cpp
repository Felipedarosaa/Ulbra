#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);
    printf("Digite o segundo número:\n");
    scanf("%f", &n2);
    
    if (n1 < n2)
    {
        printf("O menor número é: %.f\n", n1);
    }
    else if (n2 < n1)
    {
        printf("O menor número é: %.f\n", n2);
    }

    return 0;
}