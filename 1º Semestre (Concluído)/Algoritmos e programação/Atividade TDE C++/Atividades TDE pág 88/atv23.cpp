#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float codProd, quantProd;

    printf("Digite o código do produto:\n");
    scanf("%f", &codProd);
    printf("Digite a quantidade comprada do produto:\n");
    scanf("%f", & quantProd);

    if (codProd >= 1 && codProd <=10) {
      
    }
    






    return 0;
}