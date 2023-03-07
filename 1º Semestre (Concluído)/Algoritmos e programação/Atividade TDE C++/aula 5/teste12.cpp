#include <windows.h>
#include <stdlib.h>
#include<cmath>
#define pi 3.14

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

int main ()
{
   int numero1, numero2;
    printf("digite o primeiro numero\n");
    scanf("%d", &numero1);

    printf("digite o segundo numero\n");
    scanf("%d", &numero2);

    int resultado = pow(numero1, numero2);

    printf("os numeros %d elevado ao numero %d e igual a: %d\n", numero1, numero2, resultado);
    
return 0;

}

//Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.