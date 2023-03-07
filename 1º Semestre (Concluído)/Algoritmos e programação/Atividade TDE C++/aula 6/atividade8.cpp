#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float pesoKg, pesoMG;

    printf("digite o peso em quilos\n");
    scanf("%f", &pesoKg);

    pesoMG = (pesoKg * 1000);

    printf("o peso em gramas é: %.2f\n", pesoMG);

    return 0;
}
