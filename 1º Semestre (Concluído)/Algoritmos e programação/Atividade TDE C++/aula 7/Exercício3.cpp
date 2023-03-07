#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2;

    printf("digite o primeiro número\n");
    scanf("%f", &n1);

    printf("digite o segundo número\n");
    scanf("%f", &n2);


    if (n1>n2) {
        printf("O maior número é:%.2f\n", n1);
    }

    else if (n2>n1) {
         printf("O maior número é:%.2f\n", n2);
    }

    else if (n1=n2) {
        printf("Os números são iguais\n",n1, n2);
    }

    return 0;
}