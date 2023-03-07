#include <stdio.h>
#include <math.h>
#include <windows.h>
#define pi 3.14

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float ano_nascimento, ano_atual, idade_atual, idade_2050;

    printf("digite o ano atual\n");
    scanf("%f", &ano_atual);

    printf("digite o ano de nascimento\n");
    scanf("%f", &ano_nascimento);

    idade_atual = (ano_atual - ano_nascimento);
    idade_2050 = (2050 - ano_nascimento);

    printf("a idade atual e:%.2f\n", idade_atual);
    printf("a idade em 2050 sera de:%.2f\n", idade_2050);

    return 0;
}

//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
//a) a idade dessa pessoa; 
//b) quantos anos ela terá em 2050.