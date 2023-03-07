#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float n1, n2, n3, i;
    printf("Digite o valor A: \n");
    scanf("%f%*c", &n1);
    printf("Digite o valor B: \n");
    scanf("%f%*c", &n2);
    printf("Digite o valor C: \n");
    scanf("%f%*c", &n3);
    printf("Escolha uma opção (1,2 ou 3): \n");
    scanf("%f%*c", &i);

    if (i = 1 && n1 < n2 && n1 < n3 && n2 < n3)
        {
            printf("A ordem crescente é: %f, %f, %f", n1, n2, n3);
        }
        else if (i=1 && n2 < n1 && n2 < n3 && n1 < n3)
        {
            printf("A ordem crescente é: %f, %f, %f", n2, n1, n3);
        }
        else if (i=1 && n2 < n1 && n3 < n1 && n2 < n3)
        {
            printf("A ordem crescente é: %f, %f, %f", n2, n3, n1);
        }
        else if (i=1 && n1 < n2 && n1 < n3 && n3 < n2)
        {
            printf("A ordem crescente é: %f, %f, %f", n1, n3, n2);
        }
        else if (i=1 && n3 < n1 && n3 < n2 && n1 < n2)
        {
            printf("A ordem crescente é: %f, %f, %f", n3, n1, n2);
        }
        else if (i=1 && n2 < n1 && n3 < n1 && n3 < n2)
        {
            printf("A ordem crescente é: %f, %f, %f", n3, n2, n1);
        }
    if (i = 2 && n1 > n2 && n1 > n3 && n2 > n3)
        {
            printf("A ordem decrescente é: %f, %f, %f", n1, n2, n3);
        }
        else if ( i = 2 && n2 > n1 && n2 > n3 && n1 > n3)
        {
            printf("A ordem decrescente é: %f, %f, %f", n2, n1, n3);
        }
        else if ( i = 2 && n2 > n1 && n3 > n1 && n2 > n3)
        {
            printf("A ordem decrescente é: %f, %f, %f", n2, n3, n1);
        }
        else if ( i = 2 && n1 > n2 && n1 > n3 && n3 > n2)
        {
            printf("A ordem decrescente é: %f, %f, %f", n1, n3, n2);
        }
        else if (i = 2 && n3 > n1 && n3 > n2 && n1 > n2)
        {
            printf("A ordem decrescente é: %f, %f, %f", n3, n1, n2);
        }
        else if (i = 2 && n2 > n1 && n3 > n1 && n3 > n2)
        {
            printf("A ordem decrescente é: %f, %f, %f", n3, n2, n1);
        }

    if (i = 3 && n1 > n2 && n1 > n3)
        {
            printf("A ordem correta é: %f, %f, %f", n2, n1, n3);
        }
        else if ( i = 3 && n2 > n3 && n2 > n1)
        {
            printf("A ordem correta é: %f, %f, %f", n1, n2, n3);
        }
        else if (i = 3 && n3 > n1 && n3 > n2)
        {
            printf("A ordem correta é: %f, %f, %f", n1, n3, n2);
        }
    return 0;
}