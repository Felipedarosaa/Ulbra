#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float altura, sexo, pesoIdeal;

    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Digite 1 se o seu sexo é Masculino, ou 2 se o seu sexo for Feminino:\n");
    scanf("%f", &sexo);

    if (sexo == 1) {
        printf("Você escolheu a opção 1\n");

        pesoIdeal = (72.7*altura) - 58;
        printf("O seu peso ideal é: %.fKg\n", pesoIdeal);
    }
    else if (sexo == 2) {
        printf("Você escolheu a opção 2\n");

        pesoIdeal = (62.1*altura) - 44.7;
        printf("O seu peso ideal é: %.fKg\n", pesoIdeal);
    }
    
    return 0;
}