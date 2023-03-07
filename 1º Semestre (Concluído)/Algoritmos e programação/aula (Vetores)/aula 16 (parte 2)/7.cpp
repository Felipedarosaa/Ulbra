#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

int vetor[10], negativo = 0, soma = 0;

    printf("Informe 10 numeros reais:\n");
 for(int i = 0; i < 10; i++) {

    printf("%.dº número: ", i+1);
    scanf("%d", &vetor[i]);

if(vetor[i] < 0) {
    negativo++;
   }

if(vetor[i] > 0) {
    soma = soma + vetor[i];
   }
 }
    printf("\nnúmeros negativos = %.d\nA soma dos numeros positivos = %.d\n", negativo, soma);

return 0;

}