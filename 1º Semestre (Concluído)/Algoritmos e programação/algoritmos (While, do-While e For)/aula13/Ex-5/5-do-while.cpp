#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int soma, i, n;
    i=1;
    soma=0; 
    printf("Informe um número\n");
    scanf("%d", &n);
     do {
        soma=i+soma;
        i++;
     } while (i<n);
     printf("A soma de 1 até %d é: %d\n", n, soma);
}
//Faça um programa que leia um número N, e realize a soma dos números de 1 a N. Ao final, deve-se escrever o resultado. Esse algoritmo deve ser feito duas vezes uma usando o While e Do-While