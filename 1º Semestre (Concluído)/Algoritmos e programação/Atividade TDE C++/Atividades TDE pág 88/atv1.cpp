#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1, nota2, nota3, nota4, mediaArit;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);
    printf("Digite a nota 3:\n");
    scanf("%f", &nota3);
    printf("Digite a nota 4:\n");
    scanf("%f", &nota4);


    mediaArit =(nota1 + nota2 + nota3 + nota4)/4;

    if (mediaArit >= 7)
    {
        printf("A média é: %.f\n", mediaArit);
        printf("Você foi Aprovado!!! Parabéns!!!\n");
    }else{
        printf("Você foi reprovado!\n");
    }

    return 0;
}
