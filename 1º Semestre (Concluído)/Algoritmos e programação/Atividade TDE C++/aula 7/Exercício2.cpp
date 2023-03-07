#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1, nota2, nota3, media, nota_exame;

    printf("digite a primeira nota\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota\n");
    scanf("%f", &nota2);

    printf("digite a terceira nota\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A média aritmérica é: %.2f\n", media);

    if (media >=0 && media <3) {
        printf("Você foi Reprovado\n");
    }

    if (media >=3 && media <7) {
        printf("Você ficou para o Exame\n");
        nota_exame =  (12 - media);
        printf("deve tirar nota %.2f para ser aprovado", nota_exame); 
    }
    
    if (media >=7 && media <=10) {
        printf("Você foi Aprovado\n");
    }

    return 0;
}