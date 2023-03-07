#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float area, diagonalMaior, diagonalMenor;

    printf("digite o diagonal maior\n");
    scanf("%f", &diagonalMaior);

    printf("digite o diagonal menor\n");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor/2);

    printf("a área do losango é de: %.2f\n", area);

    return 0;
}
