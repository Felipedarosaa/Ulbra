#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int n;

    do{
    printf("Digite um número:\n");
    scanf("%d%*c", &n);

    if (n<=0){
        break;                      
    }else{
        if (n%2==0) {
            printf("Número PAR\n");
        }else{
            printf("Número ÍMPAR\n");
        }
    }
    }while (n>0); 
}
//Faça um programa para ler uma quantidade indeterminada de valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O programa será encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO.
