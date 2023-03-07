#include <stdio.h>
#include <math.h>
#include <windows.h>
#define pi 3.14

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float preco_fab, percentual_dis, perc_impos, vlr_distribuidora, vlr_impos, preco_final;

    printf("digite o preco de fabrica\n");
    scanf("%f", &preco_fab);
    printf("digite o percentual de lucro do vendedor\n");
    scanf("%f", & percentual_dis);
    printf("digite o percentual de impostos\n");
    scanf("%f", &perc_impos);

    vlr_distribuidora = preco_fab * percentual_dis /100;
    vlr_impos = preco_fab * perc_impos /100;
    preco_final = preco_fab +vlr_distribuidora +vlr_impos;

    printf("o lucro do distribuidor e: %.2f\n", vlr_distribuidora);
    printf("valor dos impostos e:%.2f\n", vlr_impos);
    printf("o valor final do veiculo e:%.2f\n", preco_final);

    return 0;
}

//O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
//distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor; 
//b) o valor correspondente aos impostos; 
//c) o preço final do veículo. 