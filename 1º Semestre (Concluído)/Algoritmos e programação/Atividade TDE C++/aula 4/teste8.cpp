#include <stdio.h>
int main ( )
{

float deposito, taxa, rendimento, total;

printf("digite o valor do deposito\n");
    scanf("%f", &deposito);
printf("digite o valor da taxa\n");
    scanf("%f", &taxa);

rendimento = (deposito * taxa/100);
total = (deposito + rendimento);

printf("o rendimento foi de:%.2f",rendimento);
printf("o valor total ficou em:%.2f",total);

return 0;
}

// Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
// calcule e mostre o valor do rendimento e o valor total depois do rendimento