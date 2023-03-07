#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float pesoPessoa, novoPeso;
    float peso_15, peso_20;

    printf("digite o peso da pessoa \n");
    scanf("%f", &pesoPessoa);

    peso_15 = (pesoPessoa * 15/100);
    peso_15 = (peso_15 + pesoPessoa);
    peso_20 = (pesoPessoa * 20/100);
    peso_20 = (peso_20 - pesoPessoa);
   
    printf("o peso da pessoa se ela engordar será: %.2f\n", peso_15);
    printf("o peso da pessoa se ela emagrecer será: %.2f\n", peso_20);

    return 0;
}