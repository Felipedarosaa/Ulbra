#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vetor[10], par=0, contador=0;
        
    for (int i = 0; i < 10; i++) {
        printf("Digite um número:\n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i]%2==0) {
            contador=contador+1;
        }
    }
    printf("O total de números Pares é: %d\n", contador);

    return 0;
}
//Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.