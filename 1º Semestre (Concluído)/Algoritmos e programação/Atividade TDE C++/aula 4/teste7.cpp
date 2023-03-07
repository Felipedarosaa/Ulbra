#include <stdio.h>

int main ( )
{

float salario, salReceber, imp ;

printf("digite o salario base do funcionario\n");
scanf("%f", &salario);

imp = (salario * 10/100);
salReceber = (salario+50-imp);

printf("o salario do funcionario a receber e:%.2f", salReceber);

return 0;
}


// Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
// sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.