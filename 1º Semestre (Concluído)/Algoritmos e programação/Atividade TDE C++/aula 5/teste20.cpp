#include <windows.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float angulo, altura, escada, radiano;

    printf("digite o angulo da escada\n");
    scanf("%f", &angulo);
    printf("digite a altura da escada\n");
    scanf("%f", &altura);

    radiano = (angulo * 3.14 /180);
    escada = (altura / radiano);

    printf("a medida da escada e de:%.2f\n", escada);

return 0;
}

//Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no 
//chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida dessa escada.
//Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham 
//com medidas de ângulos em radianos.