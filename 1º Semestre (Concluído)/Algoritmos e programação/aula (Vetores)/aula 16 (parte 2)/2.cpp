#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

   int vetor[7], i;

    // recebe os números //
    for (i = 0; i < 7; i++) {
        printf("Digite o %.dº número:\n", i+1);
        scanf("%d%*c", &vetor[i]);
    }
        // múltiplos de 2 //
        printf("Os números múltiplos de 2 são: ");
    for (i = 0; i < 7; i++) {
        if (vetor[i] %2==0) {
        printf("(%.d) ", vetor[i]);  
        }   
    }   
        // múltiplos de 3 //
        printf("\nOs números múltiplos de 3 são: ");
    for (i = 0; i < 7; i++) {
        if (vetor[i] %3==0) {
        printf("(%.d) ", vetor[i]);
        }
    }

        printf("\n-------------------------------------------\n");

        // múltiplos de 2 e 3 //
        printf("E por fim os números múltiplos de 2 e 3: ");
    for (i = 0; i < 7; i++) {
        if (vetor[i] %2==0 && vetor[i] %3==0) { 
        printf("(%.d) ", vetor[i]);
        i++;
        }
    }
    return 0;
}