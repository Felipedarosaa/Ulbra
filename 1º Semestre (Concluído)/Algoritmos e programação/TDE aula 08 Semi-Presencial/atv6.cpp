#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1, n2, n3;
    printf("Digite o primeiro número: \n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo número: \n");
    scanf("%f%*c", &n2);
    printf("Digite o primeiro número: \n");
    scanf("%f%*c", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("O maior número é o %.f", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("O maior número é o %.f", n2);
    }
    else if (n3> n1 && n3 > n2)
    {
        printf("O maior número é o %.f", n3);
    }

    return 0;
}