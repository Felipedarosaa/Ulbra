#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i, valor;
    int nImpar=0;
    int nPar=0;
    i=0;
    
    for (i = 0; i<10; i++) {    
    printf("Digite o valor inteiro:\n");
    scanf("%d", &valor);

    if (valor%2==0) {
        printf("O número é Par\n\n");
        nPar++;
    }else{
        printf("O número é Ímpar\n\n");
        nImpar++;
    }
    printf("\n-------------\n");                                                        
        }

    printf("Foram executados %d pares\n", nPar);
    printf("Foram executados %d ímpares\n", nImpar);



}
//Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.