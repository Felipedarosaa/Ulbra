#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float peso, idade;

    printf("Digite a sua idade:\n");
    scanf("%f", &idade);
    printf("Digite o seu peso:\n");
    scanf("%f", &peso);

    if (idade < 20 && peso < 60) {
        printf("Você se encaixa no grupo de risco 9\n");
    }else if (idade < 20 && peso > 60 && peso <= 90){
        printf("Você se encaixa no grupo de risco 8\n");
    }else if (idade < 20 && peso > 90){
        printf("Você se encaixa no grupo de risco 7\n");
    }

    if (idade >= 20 && idade <= 50) 
    if (peso < 60 ) {
        printf("Você se encaixa no grupo de risco 6\n");
    }else if (idade >= 20 && idade <= 50)
        if (peso >= 60 && peso <= 90) {
        printf("Você se encaixa no grupo de risco 5\n");
    }else if (idade >= 20 && idade <= 50)
        if(peso > 90){
        printf("Você se encaixa no grupo de risco 4\n");
    }
    if (idade > 50 && peso < 60) {
        printf("Você se encaixa no grupo de risco 3\n");
    }else if (idade > 50)
        if(peso >= 60 && peso <= 90){
        printf("Você se encaixa no grupo de risco 2\n");
    }else if (idade > 50 && peso > 90){
        printf("Você se encaixa no grupo de risco 1\n");
    }
    
    return 0;
}