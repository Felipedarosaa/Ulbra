#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float area, lado;

    printf("digite o tamanho do lado\n");
    scanf("%f", &lado);

    area = (lado*lado);

    printf("a área do quadradado é: %.2f\n", area);

    return 0;
}