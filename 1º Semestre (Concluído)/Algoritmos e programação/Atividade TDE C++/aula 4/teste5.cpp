#include <stdio.h>

int main ( )

{

float salario, aumento, novoSal;

printf("digite o valor do salario\n");
scanf("%f", &salario);

printf("digite o valor do aumento em porcentagem\n");
scanf("%f", &aumento);

aumento = (salario*aumento/100);
novoSal = (aumento+salario);

printf("o valor do aumento e:%.2f", aumento);
printf("o valor do novo salario e:%.2f", novoSal);

return 0;

}

// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
// o valor do aumento e o novo salário
