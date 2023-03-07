#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i, numero[6];

     printf("Digite 6 números inteiros.\n");

    for(i=0; i<6; i++) {
     printf("Digite o %d valor: ", (i+1));
     scanf("%d", &numero[i]);
   }

     printf("Resultado:\n");
    for(i=5; i>=0; i--) {
    if (numero[i]%2==0) {  
     printf("%d\n", numero[i]);
    }
    }
    system("pause");
    return 0;
}

// Crie um programa que lê 6 valores num vetor inteiros pares e, em seguida, mostre na tela os valores ˆ lidos na ordem inversa. 