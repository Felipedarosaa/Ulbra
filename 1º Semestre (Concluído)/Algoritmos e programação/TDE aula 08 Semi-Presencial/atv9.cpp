#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
UINT CPAGE_UTF8 = 65001;
UINT CPAGE_DEFAULT = GetConsoleOutputCP ();
SetConsoleOutputCP(CPAGE_UTF8);
    float nt1, nt2, nt3, media;
    printf("Digite a sua primeira nota\n");
    scanf("%f%*c", &nt1);
    printf("Digite a sua segunda nota\n");
    scanf("%f%*c", &nt2);
    printf("Digite a sua terceira nota \n");
    scanf("%f%*c", &nt3);
    media = (nt1+ nt2 + nt3) / 3;
    printf("Sua média é:%.2f\n", media);
    
    if (media >= 9)
    {
        printf("Você tirou A, APROVADO\n");
    }
    else if (media >= 7.5 && media < 9)
    {
        printf("Você tirou B, APROVADO\n");
    }
    else if (media >= 6 && media < 7.5)
    {
        printf("Você tirou C, APROVADO\n");
    }
    else if (media >= 4 && media < 6)
    {
        printf("Você tirou D, REPROVADO\n");
    }
    else if (media >= 0 && media < 5)
    {
        printf("Você tirou E, REPROVADO\n");
    }
    return 0;
}