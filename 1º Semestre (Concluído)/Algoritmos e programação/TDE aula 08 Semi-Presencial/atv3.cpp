#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    //Faça um programa para ler dois valores numéricos e apresentar a diferença do maior pelo menor. 

    float n1, n2, diferenca;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);
    printf("Digite o segundo número:\n");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        diferenca = n1-n2;
        printf("A diferença entre o primeiro número e o segundo é: %.f\n", diferenca);
    }
    
    return 0;
}