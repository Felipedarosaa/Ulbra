#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float horas_trabalhadas, valor_salario_minimo, valor_horas_trabalhadas;
    float valor_salario_bru, imposto, valor_salario_liq;
    
    printf("o numero de horas trabalhadas\n");
    scanf("%f", &horas_trabalhadas);
    printf("digite o vaor do salario minimo\n");
    scanf("%f", &valor_salario_minimo);

    valor_horas_trabalhadas = (valor_salario_minimo /2);
    valor_salario_bru = (horas_trabalhadas * valor_horas_trabalhadas);
    imposto = (valor_salario_bru * 3 /100);
    valor_salario_liq = (valor_salario_bru - imposto);

    printf("o salario liquido a receber e:%.2f\n", valor_salario_liq);

    return 0;
}

//Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
//mostre o salário a receber, seguindo estas regras:
//a) a hora trabalhada vale a metade do salário mínimo. 
//b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. 
//c) o imposto equivale a 3% do salário bruto. 
//d) o salário a receber equivale ao salário bruto menos o imposto.
