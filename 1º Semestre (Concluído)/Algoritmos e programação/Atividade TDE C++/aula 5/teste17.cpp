#include <windows.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float salario,  cpmf, parcial, parcial2;    

    printf("digite o valor do salario do trabalhador\n");
    scanf("%f", &salario);

    cpmf = (0.38/100);
    parcial = (salario * cpmf);
    salario = (salario - parcial);
    parcial2 = (salario * cpmf);
    salario = (salario - parcial2);
    
    printf("o saldo apos as retiradas e de:%.2f\n", salario);

    return 0;
}

//Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois 
//cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga 
//CPMF de 0,38% e o saldo inicial da conta está zerado.