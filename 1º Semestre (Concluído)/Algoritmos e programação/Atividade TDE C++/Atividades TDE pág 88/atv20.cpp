#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float idade;

    printf("Digite a idade do nadador:\n");
    scanf("%f", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil\n");
    }
    else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Juvenil\n");
    }
    else if (idade >= 11 && idade <= 15) {
        printf("Categoria: Adolescente\n");
    }
    else if (idade >= 16 && idade <= 30) {
        printf("Categoria: Adulto\n");
    }
    else if (idade > 30) {
        printf("Categoria: Sênior\n");
    }
    else if (idade < 5)
    {
        printf("Você não está em nenhuma categoria\n");
    }

    return 0;
}