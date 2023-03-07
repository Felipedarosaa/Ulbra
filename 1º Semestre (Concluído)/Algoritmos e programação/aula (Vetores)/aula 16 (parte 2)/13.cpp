#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char nome[100];
    int nota[8];
    float media = 0, soma = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o nome do aluno:\n");
        scanf("%s%*c", &nome[i]);

        printf("Digite a nota do aluno:\n");
        scanf("%d%*c", &nota[i]);
        soma = soma + nota[i];
    }

    media = soma / 8;
    printf("A média da classe é: %.f\n", media);

    return 0;
}