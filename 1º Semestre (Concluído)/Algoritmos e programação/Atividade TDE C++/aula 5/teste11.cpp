#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float numero, quadrado, cubo, raiz2, raiz3;
        printf("digite um valor positivo maior que zero:\n");
        scanf("%f", &numero);

        quadrado = pow (numero,2);
        printf("valor do numero ao quadrado e:%.2f\n", quadrado);

        cubo = pow (numero,3);
        printf("valor do numero ao cubo e %.2f\n", cubo);

        raiz2 = sqrt(numero);
        printf("valor da raiz quadrada %.2f\n", raiz2);

        raiz3 = cbrt(numero);
        printf("valor da raiz cubica %.2f\n", raiz3);

    return 0;
}

//. Faça um programa que receba um número positivo e maior que zero, calcule e mostre: 
//a) o número digitado ao quadrado; 
//b) o número digitado ao cubo; 
//c) a raiz quadrada do número digitado; 
//d) a raiz cúbica do número digitado
