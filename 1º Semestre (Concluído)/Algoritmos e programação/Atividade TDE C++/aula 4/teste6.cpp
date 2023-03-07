#include <stdio.h>

int main ()

{
    float salario, salReceber, grat, imp;

    printf("digite o salario base do funcionario\n");
    scanf("%f", &salario);

    grat = (salario * 5/100);
    imp = (salario * 7/100);
    salReceber = (salario+grat-imp);

    printf("o salario do funcionario a receber e:%.2f",salReceber);

return 0;
}

// Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
// sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.
