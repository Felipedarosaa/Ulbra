#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float senha;

    printf("Digite a senha:\n");
    scanf("%f", &senha);

    if (senha == 4531) {
        printf("Acesso Liberado!\n");
    }else{
        printf("Acesso Negado!\n");
    }

    return 0;
}