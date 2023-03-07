#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1, nota2, mediaArit;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);


    mediaArit = (nota1 + nota2)/2;


    if (mediaArit < 4 && mediaArit >= 0)
    {
        printf("Reprovado!\n");
    }
    else if (mediaArit >= 4 && mediaArit < 7)
    {
        printf("Exame!\n");
    }
    else if (mediaArit >= 7 && mediaArit <= 10)
    {
        printf("Aprovado!\n");
    }
    
    return 0;
}