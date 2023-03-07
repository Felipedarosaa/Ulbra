#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float aumentoSal, salFunc;

    printf("Digite o salário do funcionário:\n");
    scanf("%f", &salFunc);

    if (salFunc < 500)
    {
       printf("Você teve um aumento de 30 pocento\n");

       aumentoSal = (salFunc*30)/100 + salFunc;
       printf("Seu novo salário é de: R$%.2f\n", aumentoSal);
    }
    else{
        printf("Você não ganhou aumento!\n");
    }
    
    return 0;
}