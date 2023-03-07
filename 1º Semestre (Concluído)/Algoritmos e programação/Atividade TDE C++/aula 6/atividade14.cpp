#include <stdio.h>
#include <math.h>
#include <windows.h>

int main ()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    printf("digite o ano de nascimento da pessoa\n");
    scanf("%f", &anoNascimento);

    printf("digite o ano atual\n");
    scanf("%f", &anoAtual);

    idadeAnos = (anoAtual-anoNascimento);
    idadeMeses = (idadeAnos*12);
    idadeDias = (idadeMeses*30);
    idadeSemanas = (idadeDias/7);

    printf("A idade atual é: %.2f\n", idadeAnos);
    printf("A idade em meses é: %.2f\n", idadeMeses);
    printf("A idade em dias é: %.2f\n", idadeDias);
    printf("A idade em semanas é: %.2f\n", idadeSemanas);

    return 0;
}


