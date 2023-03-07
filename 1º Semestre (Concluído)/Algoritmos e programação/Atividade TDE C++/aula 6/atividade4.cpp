#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float nota1, nota2, mediaP;

    printf("digite a primeira nota\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota\n");
    scanf("%f", &nota2);

    mediaP = (nota1*2)+(nota2*3)/3+2;

    printf("o valor da média ponderada é: %.2f\n", mediaP);

    return 0;
}