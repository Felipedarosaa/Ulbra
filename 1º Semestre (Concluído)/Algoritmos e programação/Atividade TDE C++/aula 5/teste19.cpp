#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float a_degrau, a_desejada, qtd_degraus;

    printf("digite a altura do degrau\n");
    scanf("%f", &a_degrau);
    printf("informe a altura que quer subir com a escada\n");
    scanf("%f", &a_desejada);

    qtd_degraus = (a_desejada / a_degrau);

    printf("a quantidade de degraus a subir e de:%.2f\n",qtd_degraus);

return 0;
}

//Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
//o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para 
//atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem 
//estar em metros