#include <stdio.h>
#include <math.h>
#include <windows.h>
#define pi 3.14

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float  pes, polegadas, jardas, milhas;

    printf("digite o numero de pes para polegadas\n");
    scanf("%f*", &pes);
    polegadas = pes*12;
    printf("o numero de polegadas e %.2f\n",polegadas);

    printf("digite o numero de pes para jardas\n");
    scanf("%f", &pes);
    jardas = pes/3;
    printf("o numero de jardas e: %.2f\n", jardas);

    printf("digite o numero de pes para milhas\n");
    scanf("%f", &pes);
    milhas = jardas/1760;
    printf("o numero de milhas e:%.2f\n", milhas);

  return 0;
}

//Sabe-se que: 
//pé = 12 polegadas 
//1 jarda = 3 pés
//1 milha = 1,760 jarda
//Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
//a) polegadas; 
//b) jardas; 
//c) milhas
    
 
