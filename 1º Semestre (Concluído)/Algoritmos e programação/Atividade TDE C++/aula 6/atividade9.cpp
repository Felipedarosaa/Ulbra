#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float baseMaior, baseMenor, altura, area;

    printf("digite a base maior\n");
    scanf("%f", &baseMaior);

    printf("digite a base menor\n");
    scanf("%f", &baseMenor);

    printf("digite a altura\n");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor)* altura/2);

    printf("a área do trapézio é: %.2f\n", area);

    return 0;
}